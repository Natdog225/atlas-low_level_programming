#include "main.h"

void print_alphabet_x10(void)
{
	int repetitions = 10;

	while (repetitions > 0)
	{
		char c = 'b';
		_putchar ('a');
			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
		if (repetitions > 1)
		{
			_putchar('\n');
		}
		repetitions--;
	}
}
