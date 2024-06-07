#include "main.h"
/**
 * _sqrt_recursion - It gives the natural square root of a number
 *
 * @n: The int in the prototype
 *
 * Return: -1, 0 then (i - 1) * (i - 1)
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
	return (n);
	
	else if (n < 0)
	return (-1);
	
	i = 1;

	while (i * i <= n)
	i++;
	if ((i - 1) * (i - 1) == n)
	return (i - 1);
	else
		return (-1);
}
