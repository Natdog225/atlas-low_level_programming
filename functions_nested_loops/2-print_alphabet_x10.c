#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;
	int print_newline = 0;

	while (i < 10)
	{
		char c;
		for (c = 'a'; c <= 'z' + 1; c++)
		{
			if (!print_newline)
			{
				_putchar(c);
			}
			else
			{
				_putchar('\n');
				break;
			}
		}
		print_newline =!print_newline;
		i++;
	}
}
