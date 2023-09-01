#include "main.h"
/**
 * string_toupper - converts lowercase letters to uppercase in a string
 * @str: the string to convert
 *
 * Return: pointer to the modief string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}
