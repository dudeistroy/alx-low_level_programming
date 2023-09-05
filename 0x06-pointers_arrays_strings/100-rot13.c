#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @str: input string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	char *input = str;
	char *output = str;

	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";

	char rot13Upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot13Lower[] = "nopqrstuvwxyzabcdefghijklm";

	int i;

	while (*input)
	{
		if (*input >= 'A' && *input <= 'Z')
		{
			for (i = 0; i < 26; i++)
			{
				if (*input == uppercase[i])
				{
					*output = rot13Upper[i];
					break;
				}
			}
		}
		else if (*input >= 'a' && *input <= 'z')
		{
			for (i = 0; i < 26; i++)
			{
				if (*input == lowercase[i])
				{
					*output = rot13Lower[i];
					break;
				}
			}
		}
		input++;
		output++;
	}

	return (str);
}
