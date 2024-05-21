#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: int used
 * Return: 0
 */
void print_to_98(int n)
{
	int a, x;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	}
}
