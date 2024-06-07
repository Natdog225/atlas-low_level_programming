#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: the char to check
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
