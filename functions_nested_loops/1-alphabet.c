#include "main.h"
/**
 * print_alphabet - Prints the alphabet
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
