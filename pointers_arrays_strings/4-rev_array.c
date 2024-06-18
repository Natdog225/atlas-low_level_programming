#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	int len = 0;
	char *end_ptr;

	while (*(s + len) != '\0')
		len++;

	end_ptr = s + len - 1;

	while (end_ptr >= s)
	{
		_putchar(*end_ptr);
		end_ptr--;
	}

	_putchar('\n');
}
