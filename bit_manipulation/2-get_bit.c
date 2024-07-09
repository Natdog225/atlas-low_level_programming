#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit (0 or 1), or -1 if an oopsie happens
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1) /* Check for bad things */
		return (-1);

	return ((n >> index) & 1);
}
