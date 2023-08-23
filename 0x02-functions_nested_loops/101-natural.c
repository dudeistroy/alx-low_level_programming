#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 *
 * Return: 0 (Always Sucess)
 */
int main(void)
{
	int i;
	int limit = 1024;
	int sum = 0;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
