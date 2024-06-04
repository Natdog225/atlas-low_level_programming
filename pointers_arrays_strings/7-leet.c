#include "main.h"
#include <stdio.h>
/**
 * leet - puts a string into 1337
 * @str: the string to change
 *
 * Return: pointer to the str
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leet_chars = "4433007711";
	int i, j;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}
	return (str);
}
