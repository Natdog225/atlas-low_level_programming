#include <stdio.h>
/**
 * main - Function and main entry
 * Description: This lists base numbers
 * Return: Always 0 (successful)
 */

int main(void)
{
char hexDigits[] = "0123456789abcdef";

size_t i = 0;

while (hexDigits[i])
{
putchar(hexDigits[i]);
i++;
}

putchar('\n');
return (0);
}
