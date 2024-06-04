#include "main.h"
#include <stddef.h>
/**
 * _strncopy - copies a string
 * @dest: Destination
 * @src: Source string
 * @n: Maximum number of bytes
 *
 * Return: pointer to the dest
 */
char *_strncopy(char *dest, char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}

