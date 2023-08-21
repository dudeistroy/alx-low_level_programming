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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
