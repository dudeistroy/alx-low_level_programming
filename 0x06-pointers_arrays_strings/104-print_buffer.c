#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf(" ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];

				if (c >= 32 && c <= 126)
					putchar(c);
				else
					putchar('.');
			}
		}
		printf("\n");
	}
}
