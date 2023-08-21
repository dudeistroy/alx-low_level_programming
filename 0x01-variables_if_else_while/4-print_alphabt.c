#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints the alphabets in lowercase
 * except q and e
 *
 * Return: 0 (Always Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	putchar('\n');
	}
	return (0);
}
