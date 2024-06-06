#include "main.h"
/**
 * factorial - Tells you what the number is
 *
 * @n: int used in prototype
 *
 * Return: -1 or 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
