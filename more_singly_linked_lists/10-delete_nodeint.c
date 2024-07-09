#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	/* Handle empty list */
	if (*head == NULL)
		return (-1);

	/* Handle deletion at index 0 (head node) */
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	/* Find the node at the given index and its previous node */
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	/* If index is out of range, return -1 */
	if (current == NULL)
		return (-1);

	/* Link previous node to the next node */
	prev->next = current->next;

	free(current);

	return (1);
}
