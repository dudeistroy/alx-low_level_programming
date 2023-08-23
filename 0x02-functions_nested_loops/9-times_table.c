#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int col, row, d, u;

	for (col = 0; col <= 9; col++)
	{
	for (row = 0; row <= 9; row++)
	{
		int product = col * row;

		if (product > 9)
		{
			u = product % 10;
			d = (product - u) / 10;
			_putchar(',');
			_putchar(' ');
			_putchar(d + '0');
			_putchar(u + '0');
		}

		else
		{
			if (row != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
			_putchar(product + '0');
		}
	}
	_putchar('\n');
	}
}
