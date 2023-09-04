#include "main.h"
#include <stdbool.h>
/**
 * is_seperator - checks if a character is a word seperator
 * @c: the character to check
 *
 * Return: true if c is a sperator, false otherwise
 */
bool is_seperator(char c)
{
	char seperator[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; seperator[i] != '\0'; i++)
	{
		if (c == seperator[i])
		{
			return (true);
		}
	}

	return (false);
}

/**
 * cap_string - capitalizes all words in a string
 * @str: the string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	bool new_word = true;

	while (str[i] != '\0')
	{
		if (is_seperator(str[i]))
		{
			new_word = true;
		}
		else if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			new_word = false;
		}
		else
		{
			new_word = false;
		}

		i++;
	}
	return (str);
}
