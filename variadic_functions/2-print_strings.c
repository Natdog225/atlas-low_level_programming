#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings with a separator.
 * @separator: The string to print between each string (or NULL for none).
 * @n: The number of strings to print.
 * @...: The variable number of string arguments to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
	
}
