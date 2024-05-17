#include <stdio.h>
/**
 * main - entry point and function
 * return - 0 always (successful)
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

