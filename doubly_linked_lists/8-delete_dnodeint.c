#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the specified index
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (count < index && current != NULL)
	{
		count++;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	/* Handle the first node (index 0) */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	free(current);
	return (1);
}