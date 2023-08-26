#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers from 0 to 14
 * on 10 lines
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int a;

	for (a = 0; a <= 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('1');
			_putchar('0' + n % 10);
		}
		_putchar('\n');

	}
}
