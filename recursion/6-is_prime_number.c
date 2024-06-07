#include "main.h"
#include <math.h>
/**
 * is_prime_number - Checks if a int is a prime number.
 *
 * @n: the int
 *
 * Return: 1 if its a prime. 0 if not
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n / 2 == 0)
	{
		return (0);
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
