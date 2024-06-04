#include "main.h"
#include <stddef.h>
/**
 * _strncpy - copies a string
 * @dest: Destination
 * @src: Source string
 * @n: Maximum number of bytes
 *
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
