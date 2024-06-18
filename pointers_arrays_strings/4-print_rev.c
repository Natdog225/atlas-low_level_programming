#include "main.h"
#include <string.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	_putchar(s[index]);

	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int count;
	int inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	inc++;

	return (inc);
}

