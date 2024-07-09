#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The string containing the binary representation.
 *
 * Return: The converted unsigned int value, or 0 if:
 * The string contains characters other than 0 or 1 or is null
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1; /* Multiply by 2 for each position */
		if (b[i] == '1')
			result += 1;

		i++;
	}

	return (result);
}
