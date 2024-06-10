#include "main.h"
#include <math.h>
/**
 * is_prime_number_helper - Checks if a int is a prime number.
 *
 * @n: the int
 * @divisor: Divisor
 * Return: 1 if its a prime. 0 if not
 */
int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1 || n % divisor == 0)
	{
	return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	return (is_prime_number_helper(n, divisor + 1));
}

/**
 * is_prime_number - does the same thing
 * @n: num to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
return (is_prime_number_helper(n, 2));
}
