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
	char hexDigits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < (sizeof(hexDigits) / sizeof(char)); i++)
	{
		putchar(hexDigits[i]);
	}
	putchar('\n');
	return (0);
}
