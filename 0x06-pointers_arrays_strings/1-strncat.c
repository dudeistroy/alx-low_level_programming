#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: the destinating string
 * @src: the source string
 * @n: number of bytes to be copied from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);

	if (n > src_len)
	{
		n = src_len;
	}

	memcpy(dest + dest_len, src, n);

	dest[dest_len + n] = '\0';

	return dest;
}
