#include <stdio.h>
/**
 * main - Function and main entry
 * Description: Prints a combo of all single digit nums
 * Return: Always 0 (successful)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
