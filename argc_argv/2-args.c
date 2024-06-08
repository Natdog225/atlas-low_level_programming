#include <stdio.h>
#include "main.h"
/**
 * main - prints all args it recieves
 * @argc: number of args
 * @argv: contains the args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
