#include "main.h"

/**
 * sqrt_recursive - HElper function to calculate square root recursively
 * @n: The number for which to find the square root
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if not found
 */
int sqrt_recursive(int n, int i);


/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of n, or
 * -1 if n does not have a natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - Helper function to calculate square root recursively
 * @n: The number for which to find the square root
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if not found
 */
int sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (sqrt_recursive(n, i + 1));
}
