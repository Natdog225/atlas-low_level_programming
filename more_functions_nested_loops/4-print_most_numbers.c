#include "main.h"
/**
 * description - this prints numbers
 *
 * print_most_numbers - see desc
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
