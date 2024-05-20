#include "main.h"
/**
 * main - Function and main entry point
 * print_alphabet: prints alphabet
 * Return: Always 0 (succesful)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
