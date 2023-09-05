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

	while (*input)
	{
	char shift = (*input >= 'A' && *input <= 'Z') ? 'A' : (*input >= 'a' && *input <= 'z') ? 'a' : 0;

	if (shift)
	{
		*output = ((*input - shift + 13) % 26) + shift;
	}
	input++;
	output++;
	}

	return (str);
}
