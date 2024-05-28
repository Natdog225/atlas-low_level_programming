#include <stdio.h>

/**
 * main - Prints FizzBuzz for multiples of 3 and 5, Fizz for multiples of 3,
 *        Buzz for multiples of 5, and the number itself otherwise.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
		printf("FizzBuzz");
		if (num != 100)
			printf(" ");
		}
	else if (num % 3 == 0)
		printf("Fizz ");
	else if (num % 5 == 0)
	{
		printf("Buzz");
		if (num != 100)
			printf(" ");
	}
	else
		printf("%d ", num);
	}
	printf("\n");
	return (0);
}

