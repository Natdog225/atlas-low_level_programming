#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Creates an array of chars
 *
 * @size: size of array
 * @c: char to start array
 *
 * Return: 0 or null if it fails, if it works a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
