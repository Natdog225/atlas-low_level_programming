#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be, starting at 0.
 * @n: Integer data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	/* Handle special case of adding at index 0 */
	if (idx == 0)
		return (add_nodeint(head, n));

	/* Find the node before the insertion point */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	/* Create the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert the new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
