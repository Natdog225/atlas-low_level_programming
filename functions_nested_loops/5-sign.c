#include "main.h"
/**
 * print_sign - tells ya if its pos, neg or not
 *
 * Description: What the function says
 *
 * @n: is the int
 *
 * Return: 1 if its greater, 0 if its 0, -1 if its less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
