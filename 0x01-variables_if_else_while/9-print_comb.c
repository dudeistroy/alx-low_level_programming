#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all combinations
 * of single digit numbers
 * seperated by a comma and space
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
