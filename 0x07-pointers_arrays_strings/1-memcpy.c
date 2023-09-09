#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copy memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
