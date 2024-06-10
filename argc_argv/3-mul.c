#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 && argv[1][0] != '0')
	{
		printf("Error\n");
		return (1);
	}
	if (num2 == 0 && argv[2][0] != '0')
	{
		printf("Error\n");
		return (1);
	}
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}


