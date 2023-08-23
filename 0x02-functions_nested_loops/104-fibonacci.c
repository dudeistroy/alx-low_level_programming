#include <stdio.h>
/**
 * print_fibonacci - Prints fibonacci sequence up to n terms.
 * @a: The first number in the sequence
 * @b: The second number in the sequence
 * @n: The number of terms to print
 *
 * Description - a program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 (ALways Success)
 */
void print_fibonacci(unsigned long a, unsigned long b, int n)
{
	int i;
	unsigned long temp;

	if (n > 0)
	{
		printf("%lu", a);
		for (i = 1; i < n; i++)
		{
			printf(", %lu", b);
			temp = a + b;

			a = b;
			b = temp;
		}
		printf("\n");
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;

	print_fibonacci(fib1, fib2, 98);

	return (0);
}
