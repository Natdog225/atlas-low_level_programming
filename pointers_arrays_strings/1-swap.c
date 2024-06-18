#include "main.h"
/**
 * swap int - swaps the value of two ints
 * @a: int one
 * @b: int two
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
