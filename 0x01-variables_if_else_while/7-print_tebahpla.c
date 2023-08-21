#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all the alphabets
 * in reverse
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
