#include "main.h"
#include <ctype.h>
#include <stddef.h>
/**
 * string_toupper - converts all lowercase to upper
 * @str: the string that changes
 *
 * Return: a pointer to the changed str
 */
char *string_toupper(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = str;

	while (*ptr != '\0')
	{
		*ptr = _toupper((unsigned char)*ptr);
		ptr++;
	}
	return (str);
}
