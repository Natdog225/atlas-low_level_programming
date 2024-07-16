#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the list.
 * @idx: Index at which the new node should be added, starting from 0.
 * @n: Data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed or index is OOB
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Find the node before the desired index */
	current = *h;
	while (count < idx - 1 && current != NULL)
	{
		count++;
		current = current->next;
	}

	/* Check if index is out of bounds */
	if (count != idx - 1 || current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node */
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
