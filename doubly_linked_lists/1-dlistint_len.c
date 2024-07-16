#include "lists.h"

/**
 * dlistint_len - Returns the number of stuff in a linked list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of things in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
