#include "main.h"

/**
 * clear_bit - Clears the value of a bit to 0.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to get rid of
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8) - 1) /* Check for invalid index */
		return (-1);

	mask = ~(1 << index); /* Create a mask with 0 at the specified index */
	*n = *n & mask;		  /* Clear the bit using AND operation */

	return (1);
}
