#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description - a program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 (ALways Success)
 */
int main(void)
{
	int i;
	unsigned int fib1 = 1, fib2 = 2, nextFib;

	printf("%u, %u, ", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		nextFib = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextFib;

		if (i < 97)
		{
			printf("%u, ", nextFib);
		}
		else
		{
			printf("%u\n", nextFib);
		}
	}

	return (0);
}
