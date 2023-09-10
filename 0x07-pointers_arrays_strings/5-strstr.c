#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring within a string
 * @haystack: Pointer to the string to search within
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring in haystack,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;
		j = 0;

		while (needle[j] && (haystack[i] == needle[j]))
		{
			i++;
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
