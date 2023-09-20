#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all tne arguments of the program
 * @ac: The number of arguments
 * @av: An array of strings containing arguments
 *
 * Return: A Pointer to a new string containing the concatenated arguments
 * seperated by newlines, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[len] = '\0';

	return (str);
}
