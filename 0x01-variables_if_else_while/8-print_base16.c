#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all the numbers
 * of base 16
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
