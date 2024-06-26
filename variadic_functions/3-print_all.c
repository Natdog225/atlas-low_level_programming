#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A string specifying the format of the arguments to be printed.
 *
 * Description:
 * This function prints arguments based on a format string.
 * specifiers are:
 * 'c': char
 * 'i': integer
 * 'f': float
 * 's': char * (string)
 *
 * If a string argument is NULL, it's printed as "(nil)"
 * The function always prints a newline at the end.
 *
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *s;
    double f;
    int d;
    char c;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
        } 
        else if (format[i] == 'i') 
        {
            d = va_arg(args, int); 
            printf("%d", d);
        }
        else if (format[i] == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
        }
        else if (format[i] == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL) 
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s);
            }
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
