#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to be printed.
 *
 * Description: This function prints a string to stdout,
 * followed by a new line.
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
