#include "main.h"
/**
 * print_line - it prints a line
 *
 * Description: look at function
 *
 * @n: int used
 *
 * Return: 0
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
