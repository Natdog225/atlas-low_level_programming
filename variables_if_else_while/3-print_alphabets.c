#include <stdio.h>
/**
 * main - function and entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (size_t i = 0; letters[i]!= '\0'; i++)
{
putchar(letters[i]);
}
putchar(' ');
for (size_t i = 0; letters[i]!= '\0'; i++)
{
putchar(letters[i]);
}
putchar('\n');
return (0);
}
