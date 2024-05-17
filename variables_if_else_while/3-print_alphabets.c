#include <stdio.h>

int main(void)
{
char* alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

int i = 0;
while (alphabet[i]!= '\0')
{
putchar(alphabet[i]);
i++;
}

putchar(' ');

putchar('\n');

	return (0);
}

