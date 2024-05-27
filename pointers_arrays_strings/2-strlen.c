#include "main.h"
#include <stdio.h>

/**
 * _strlen - this will print the length of int
 * @s: int to be checked
 *
 * Description: Function to print out the length of the int.
 *
 * Return: void.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
