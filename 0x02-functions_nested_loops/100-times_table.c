#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, tensdigit, onesdigit, product;

	if (n >= 0 && n <= 15)
	{
	for (row = 0; row <= n; row++)
	{
	for (col = 0; col <= n; col++)
	{
	product = col * row;

	if (col == 0)
	{
	_putchar('0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	if (product < 10)
	{
	_putchar(' ');
	_putchar(' ');
	}
	else
	{
	_putchar(' ');
	}

	tensdigit = '0' + product / 10;
	onesdigit = '0' + product % 10;

	if (tensdigit == '0' && col != 0)
	{
	_putchar(' ');
	}
	else
	{
	_putchar(tensdigit);
	}
	_putchar(onesdigit);
	}
	}
	_putchar('\n');
	}
	}
}
