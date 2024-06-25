#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The integer array.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array && action) /* Null checks */
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
