#ifndef MAIN_H
#define MAIN_H

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *orig = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (orig);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#endif /* MAIN_H */