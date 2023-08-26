#include "main.h"
/**
 * print_line - prints "_" n times
 * @n: number of times "_" is printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
