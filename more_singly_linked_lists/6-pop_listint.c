#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return 0;

	temp = *head;		/* Store the head node to be deleted */
	data = temp->n;		/* Extract the data from the head node */
	*head = temp->next; /* Update the head to point to the next node */
	free(temp);			/* Free the memory of the deleted head node */

	return data;
}