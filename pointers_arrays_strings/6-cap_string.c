#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all in a string
 * @str: The string to change
 *
 * Return: A pointer to the changed str
 */
char *cap_string(char *str)
{
	int is_word_start = 1;
	char *p;

	for (p = str; *p; ++p)
	{
		if (is_word_start && isalpha(*p))
		{
			*p = _toupper(*p);
		}
		is_word_start = isspace(*p);
	}
	return (str);
}
