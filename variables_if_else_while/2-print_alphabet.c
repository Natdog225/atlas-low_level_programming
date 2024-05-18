#include <stdio.h>
/**
 * Main - entry point and function
 * Return: Always (0) (successful)
 */
int main(void)
{
char *alphabet = "abcdefghijklmnopqrstuvwxyz";

int i = 0;
while (alphabet[i] != '\0')
{
putchar(alphabet[i]);
i++;
}


putchar('\n');

return (0);
}
