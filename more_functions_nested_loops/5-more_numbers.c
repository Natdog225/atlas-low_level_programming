#include "main.h"
/**
 * more_numbers - prints the numbers 10 times
 *
 * Description: This prints numbers 0 to 14 ten times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	for (j = 0; j < 10; j++)
	{
		_putchar('0' + i);
		i++;
			if (i == 15)
			{
				i = 0;
			}
	}
	_putchar('\n');
}
