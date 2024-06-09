#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of args
 * @argc: number of args
 * @argv: Contains the args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
	int i;
{
	printf("Number of arguments: %d\n", argc - 1);

	for (int i = 1; i < argc; i++)
	{ 
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return (0);
}
