#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * This code lets you know what numbers are positve, negative or zero
 * main - Entry point
 *
 * Return:(0) - Successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
