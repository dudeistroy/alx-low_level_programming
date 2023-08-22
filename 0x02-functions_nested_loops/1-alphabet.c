#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 * Description: A program that prints the alphabets
 * in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
}
