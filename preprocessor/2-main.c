#include <stdio.h>

/**
 * main - Prints the filename the program was compiled from.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("%s\n", __FILE__); 
	return (0);
}
