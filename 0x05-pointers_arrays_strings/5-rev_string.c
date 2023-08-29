#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
