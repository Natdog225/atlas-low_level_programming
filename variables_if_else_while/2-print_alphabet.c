#include <stdio.h>
/**
 * main - entry point and function
 * return: Always (0) (successful)
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
