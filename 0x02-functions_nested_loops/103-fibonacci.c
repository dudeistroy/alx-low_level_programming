#include <stdio.h>
/**
 * main - ENtry Point
 *
 * Description -  a program that finds and prints the sum
 * of the even-valued terms, followed by a new line.
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, nextFib, sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		nextFib = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%lu\n", sum);

	return (0);
}
