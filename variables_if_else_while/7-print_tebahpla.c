#include <stdio.h>
#include <string.h>
/**
 * main - entry point and function
 * return: Always 0 (successful)
 */
int main(void)
{
char *alphabet = "abcdfghijklmnoprstuvwxyz";
int i;

i = strlen(alphabet) - 1;
while (i >= 0)
{
putchar(alphabet[i]);
i++;
}


putchar('\n');

return (0);
}

