#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all single digit numbers
 * of base 10, starting from 0
 * using the putchar function
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
