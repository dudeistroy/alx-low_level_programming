#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - finds the largest prime factor of a number
 *
 * Return: 0 (Always Success)
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i - 2)
	{
		while ((n % 1 == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);

	return (0);
}
