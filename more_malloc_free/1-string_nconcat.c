#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - This combines strings which is dope.
 * @s1: First string
 * @s2: The second string
 * @n: max num of bytes
 * Return: NULL if it fails, otherwise a ptr to memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int len1 = 0;
    unsigned int len2 = 0;
    unsigned int i;

    if (s1 == NULL)
    s1 = "";
    if (s2 == NULL)
    s2 = "";
    
    while (s1[len1] != '\0')
    len1++;
    while (s2[len2] != '\0')
    len2++;

    if (n > len2)
    n = len2;

    result = malloc(len1 + n + 1);
    if (result == NULL)
    {
        exit(1);
    }
    for (i = 0; i < len1; i++)
    result[i] = s1[i];

    for (i = 0; i < n; i++)
    result[len1 + i] = s2[i];

    result[len1 + n] = '\0';
}
