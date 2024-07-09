#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8) - 1) /* Check for invalid index */
		return (-1);

	mask = 1 << index; /* Create a mask with 1 at the specified index */
	*n = *n | mask;	   /* Set the bit using OR operation */

	return (1);
}
