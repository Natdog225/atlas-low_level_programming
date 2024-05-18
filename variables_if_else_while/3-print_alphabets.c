#include <stdio.h>
/**
 * main - Entry point and function
 * Return: Always (0) (successful)
 */
int main(void)
{
char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int i = 0;
while (alphabet[i] != '\0')
{
putchar(alphabet[i]);
i++;
}


putchar('\n');

	return (0);
}

