#include "main.h"
#include <string.h>
/**
 * print_rev - Reverses string
 *
 * @len: Length of string 
 *
 * @index: the string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	len = strlen(s);

	for (index = len - 1; index >= 0; index--)
	_putchar(s[index]);

	_putchar('\n');
}
