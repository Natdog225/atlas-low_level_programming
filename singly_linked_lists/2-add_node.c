#include "lists.h"
#include <string.h> /* Include for strdup function */

/**
 * _strlen - Calculates the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
