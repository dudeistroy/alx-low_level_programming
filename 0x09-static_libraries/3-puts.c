#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a line using the puts function
 * @str: The string to be printed
 *
 * Return: Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
