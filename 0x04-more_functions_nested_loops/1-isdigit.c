#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 * through 0 and 9
 * @c: digit to be checked
 *
 * Return: 1 (is a digit) 0 (otherwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
