#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A string specifying the format of the arguments to be printed.
 *
 * Description:
 * This function prints arguments based on a format string.
 * specifiers are:
 * 'c': char
 * 'i': integer
 * 'f': float
 * 's': char * (string)
 *
 * If a string argument is NULL, it's printed as "(nil)"
 * The function always prints a newline at the end.
 *
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;
	double f;
	int d;
	char c;
	int printed_something = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			printed_something = 1;
			break;
		case 'i':
			d = va_arg(args, int);
			printf("%d", d);
			printed_something = 1;
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			printed_something = 1;
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			printed_something = 1;
			break;
		}
		i++;
		if (printed_something && format[i] != '\0')
			printf(", ");
			 printed_something = 0;
	}

	va_end(args);
	printf("\n");
}
