#include "main.h"
/**
 * puts2 - prints every other char in array
 * @str: A string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int len;
	int x;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
