#include <stdarg.h>
/**
 * sum_them_all - Calculates the sum of all integer arguments.
 * @n: The number of arguments to sum.
 *
 * Description: This function takes an unsigned integer 'n' indicating the number
 * If 'n' is 0, it returns 0.
 *
 * Return: The sum of all the provided arguments, or 0 if 'n' is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return 0;
	}

	va_list args;
	va_start(args, n);

	int sum = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}
