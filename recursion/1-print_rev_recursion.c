#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0' || *s == 33)
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
