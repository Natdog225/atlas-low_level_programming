#include <stdio.h>

/**
 * main - Function and main entry
 *
 * Description: Prints number 1-16
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
