#include "main.h"
/**
 * print_diagonal - It prints a line diagonally
 *
 * Description: Look at the function
 *
 * @n: the int used
 *
 * Return: 0
 */
void print_diagonal(int n)
{
        int i;

        if (n <= 0)
        {
                _putchar('\n');
                return;
        }

        for (i = 0; i < n; i++)
        {
                _putchar('\\');
                _putchar(' ');
        }
        _putchar('\n');
}
