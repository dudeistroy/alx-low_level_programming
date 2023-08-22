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
		last_digit = last_digit * -1;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
