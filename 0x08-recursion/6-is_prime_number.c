#include "main.h"
#include <stdio.h>
#include "math.h"

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if @n is a prime number, 0 otherwise
 */
int is_prime_number(int n);

/**
 * is_prime_recursive - Helper function to recursively check for primality
 * @n: The integr to be checked for primality
 * @divisor: The current divisor to check
 *
 * Return: 1 if the integer is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor <= 1)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if the integer is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
