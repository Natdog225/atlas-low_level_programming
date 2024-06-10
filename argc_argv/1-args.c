#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of args
 * @argc: number of args
 * @argv: Contains the args
 * @i: int used
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf ("%s\n", i, argv[i]);
	}

	return (0);
}
