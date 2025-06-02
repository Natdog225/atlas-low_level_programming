#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table,
 * or NULL if something went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * insert_into_sorted_list - Inserts a node into the sorted doubly linked list.
 * @ht: The sorted hash table.
 * @node: The node to insert.
 *
 * Description: This helper function handles the logic of inserting a new node
 * into its correct position in the sorted list (shead/stail).
 */
void insert_into_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current_sorted_node;

	node->sprev = NULL;
	node->snext = NULL;

	if (ht->shead == NULL) /* List is empty */
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(node->key, ht->shead->key) < 0) /* Insert at head */
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, ht->stail->key) > 0) /* Insert at tail */
	{
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
	}
	else /* Insert in the middle */
	{
		current_sorted_node = ht->shead;
		/* Find the node before which 'node' should be inserted */
		while (current_sorted_node != NULL && strcmp(node->key, current_sorted_node->key) > 0)
		{
			current_sorted_node = current_sorted_node->snext;
		}
		/* 'node' is inserted before 'current_sorted_node' */
		node->snext = current_sorted_node;
		node->sprev = current_sorted_node->sprev; /* sprev of current_sorted_node is never NULL here */
												  /* because head case is handled */
		current_sorted_node->sprev->snext = node;
		current_sorted_node->sprev = node;
	}
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table to add or update the key/value to.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Value can be an empty string.
 * Value will be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node;
	char *value_copy, *key_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists - update value */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0); /* strdup failed */
			free(current_node->value);
			current_node->value = value_copy;
			return (1);
		}
		current_node = current_node->next;
	}

	/* Key doesn't exist, create new node */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(new_node);
		return (0);
	}
	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		free(new_node);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL; /* Will be set when adding to bucket */

	/* Add to hash table bucket (collision chain) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Add to sorted doubly linked list */
	insert_into_sorted_list(ht, new_node);

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from a sorted hash table.
 * @ht: The sorted hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL); /* Key not found */
}

/**
 * shash_table_print - Prints a sorted hash table using the sorted linked list.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (!first_pair)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first_pair = 0;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * using the sorted linked list.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (!first_pair)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first_pair = 0;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp_node;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp_node = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp_node;
	}

	free(ht->array);
	free(ht);
}
