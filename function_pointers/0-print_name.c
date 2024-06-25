#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints a name.
 * @name: Pointer to the name
 * @f: Pointer to the function used to print.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
