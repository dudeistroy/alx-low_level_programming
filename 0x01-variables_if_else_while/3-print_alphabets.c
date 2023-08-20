#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: A program that prints prints the alphabet in lowercase
 * then in uppercase
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
