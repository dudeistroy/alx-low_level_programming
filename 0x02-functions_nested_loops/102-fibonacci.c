#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int n = 50;
	unsigned long int fib1 = 1, fib2 = 2;
	int i;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 2; i < n; i++)
	{
		unsigned long int nextFib = fib1 + fib2;

		printf("%lu", nextFib);
		if (i < n - 1)
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");

	return (0);
}
