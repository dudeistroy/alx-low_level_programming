#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search
 * @c: character to search for
 *
 * Return: Pointer to the first occurence of the character c
 * in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
