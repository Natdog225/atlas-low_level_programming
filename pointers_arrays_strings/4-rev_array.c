#include "main.h"
/**
 * reverse_array - Reverses the content of an array
 * @a: the array to be reversed
 * @n: number of things in the array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}

