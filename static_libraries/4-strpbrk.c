#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}
