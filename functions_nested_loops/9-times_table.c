#include "main.h"

/**
 * this script will do multiplcation tables.
 * times_table will print out the tables with 9 and all the way to 0.
 * return will be 0.
 */

void times_table(void)
{
	int row;
	int col;
	int total;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			total = row * col;

			if (col == 0)
			{
				_putchar(total + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (total < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((total / 10) + '0');
				}
				_putchar((total % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
