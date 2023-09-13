#include <stdio.h>
#include "main.h"
/**
 * factorial - Calculates the factorial of a number
 * @n: The number for which to calculate the factorial
 *
 * Return: -1 (if n < 0 [error]), 1 (factorial 0)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
