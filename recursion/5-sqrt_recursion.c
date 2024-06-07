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
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 4) * 2;

		if (root * root == n)
		{
			return (root);
		}
		else if ((root + 1) * (root + 1) == n)
		{
			return (root + 1);
		}
		else
		{
			return (-1);
		}
	}
}

