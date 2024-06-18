#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */

#include "main.h"

void print_rev(char *s)
{
	char *end_ptr = s;

	while (*end_ptr != '\0')
		end_ptr++;

	end_ptr--;

	while (end_ptr >= s)
	{
		_putchar(*end_ptr);
		end_ptr--;
	}

	_putchar('\n');
}
