#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory then initializes to zero
 * @nmemb: number of elements in the array
 * @size: The size of elements
 *
 * Return: A pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	filler = ptr;
	for (i = 0; i < total_size; i++)
	{
		filler[i] = 0;
	}
	return (ptr);
}