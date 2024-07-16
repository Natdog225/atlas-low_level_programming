#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to the address of the head of the list.
 * @n: The integer data for the new node.
 *
 * Return: The address of the new element, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	(*head)->prev = new_node;
	new_node->next = *head;

	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
