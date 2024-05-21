#include "main.h"
#include <limits.h>
/**
 * print_last_digit - it prints the last digit of a number
 *
 * @n: is the int
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n = -n;
	}

	lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
