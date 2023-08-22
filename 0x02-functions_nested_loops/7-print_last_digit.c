#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: digit to be checked
 *
 * Return: the last digit
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (r < 0)
	{
		return (-last_digit);
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
