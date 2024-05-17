#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main: Entry point
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
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
       	{
		printf("is negative\n");
	}
	return (0);
}
