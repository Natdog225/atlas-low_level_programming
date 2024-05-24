#include "main.h"
/**
 * print_square - It prints a square
 *
 * Description: it prints a square
 *
 * size: the int used
 *
 * Return: 0
 */
#include "main.h"

/**
 * print_square - Prints a square of a given size
 * @size: The size of the square
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
