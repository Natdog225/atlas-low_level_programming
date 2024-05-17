#include <stdio.h>

int main(void)
{
char* lower = "abcdefghijklmnopqrstuvwxyz";
char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int i = 0;
while (lower[i]!= '\0')
    {
        putchar(lower[i]);
        i++;
    }

putchar(' ');
i = 0;
while (upper[i]!= '\0')
{
putchar(upper[i]);
i++;
}

putchar('\n');

	return (0);
}

