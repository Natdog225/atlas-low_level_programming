#include <stdio.h>
/**
 * main - Prints the number of args
 * @argc: number of args
 * @argv: void
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
