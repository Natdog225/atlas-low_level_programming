#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from one num to a dif
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR to find differing bits */
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1; /* Count set bits (1s) in xor_result */
		xor_result >>= 1;		 /* Shift xor_result right by 1 */
	}

	return (count);
}
