#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description - a program that prints numbers from 1 to 100
 * for multiples of 3 return Fizz
 * for multiples of 5 return Buzz
 * for both multiples of 3 and 5 return FizzBuzz
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
