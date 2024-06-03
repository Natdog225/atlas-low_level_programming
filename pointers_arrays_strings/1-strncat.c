#include "main.h"
#include <stddef.h>
/**
 * _strncat - concatenates two strings,
 * @dest: the destination
 * @src: the source to be appended
 * @n: the maximum number of bytes
 *
 * Return: Pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = 0;
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
		dest_len++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';

	return (dest);
}

