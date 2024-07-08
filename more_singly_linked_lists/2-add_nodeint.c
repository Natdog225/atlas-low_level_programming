#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer data to store in the new node
 *
 * Return: The address of new element or null if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Populate the new node's data and link it to the existing list */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}