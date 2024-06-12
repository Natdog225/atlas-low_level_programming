#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to freshly joined string, or NULL if it can't be tamed
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '/0';
	
	return (result);
}
