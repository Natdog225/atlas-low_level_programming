#include <stdlib.h>
/**
 * malloc_checked - Allocates memory. 
 * @b: int used.
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
