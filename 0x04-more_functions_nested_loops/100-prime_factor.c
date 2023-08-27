#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * largest_prime_factor - prints the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	return (factor);
}
/**
 * main - Entry Point
 * Description: print the largest prime factor
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
