#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of ints
 * @min: Minimum value
 * @max: max value
 *
 * Return: Pointer to the array or NULL if min is more than max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int len;

	if (min > max)
	return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	arr[i] = min + i;

	return (arr);
}
