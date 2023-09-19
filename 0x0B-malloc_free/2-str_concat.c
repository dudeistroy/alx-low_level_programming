#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings into a new memory space
 * @s1: The string to be concatenated
 * @s2: The second string to be concatenated
 *
 * If 's1' or 's2' is NULL, it is treated as an empty string
 *
 * Return: if memory allocation fails, the function returns NULL
 * Otherwise, it returns a pointer to the newly allocated concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

