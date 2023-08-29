#include "main.h"
#include <stdio.h>
/**
 * _strlen - prints the length of the string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
