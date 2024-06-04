#include "main.h"
#include <ctype.h>
#include <stddef.h>
/**
 * string_toupper - converts all lowercase to upper
 * @str: the string that changes
 *
 * Return: a pointer to the changed str
 */
char *string_toupper(char *)
	char *ptr;
{

	if (str == NULL)
	{
		return (NULL);
	}
	*ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper((unsigned char)*ptr);
		ptr++;
	}
	return (str);
}
