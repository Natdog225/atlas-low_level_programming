#include <stdio.h>
#include "main.h"
/**
 * main - Function and main entry point
 * Function: prints alphabet
 * Return: Always 0 (succesful)
 */
void print_alphabet(void)
{
	_putchar('a');
	int i;

	for (int i = 'b'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n')
}
int main()
{
	print_alphabet();
	return (0);
}
