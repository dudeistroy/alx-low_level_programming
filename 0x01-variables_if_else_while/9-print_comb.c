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

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
