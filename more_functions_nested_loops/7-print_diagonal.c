#include "main.h"
/**
 * print_diagonal - It prints a line diagonally
 *
 * Description: Look at the function
 *
 * @n: the int used
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	return;
	}
	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
