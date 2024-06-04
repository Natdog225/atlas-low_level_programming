#include "main.h"
/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int n;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		n = 0;

		if (haystack[n] == needle[n])
		{
			do {
				if (needle[n + 1] == '\0')
					return (haystack);
				n++;
			} while (haystack[n] == needle[n]);
		}
		haystack++;
	}
	return ('\0');
}
