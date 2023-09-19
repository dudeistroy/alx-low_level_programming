#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string using dynamic memory allocation
 * @str: The string to be duplicated
 *
 * Return: If 'str' is NULL or if memory allocation fails, it returns NULL
 * Otherwise, it returns a pounter to the newly allocated duplicate string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
