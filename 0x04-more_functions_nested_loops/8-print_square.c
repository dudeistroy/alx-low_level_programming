#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: is size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int col, row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
