#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: pointer to the modifed string
 */
char *leet(char *str)
{
	char leetMap[] = "aAeEoOtTlL";
	char leetCodes[] = "4433007711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			if (str[i] == leetMap[j])
			{
				str[i] = leetCodes[j];
				break;
			}
		}
	}

	return (str);
}
