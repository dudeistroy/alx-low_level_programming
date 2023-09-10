#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing characters to search for
 *
 * Return: Pointer to the first occurence of any character in accept in s
 * or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
