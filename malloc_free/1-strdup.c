#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string.
 * @str: the string to dup
 *
 * Return: A pointer to dup str or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len; i;

	if (str == NULL)
		return (NULL);
	
	len = 0;
	
	while (str[len])
		len++;
	
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}


