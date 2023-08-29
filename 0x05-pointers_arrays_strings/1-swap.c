#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the valuesof two integer
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	*b = temp;
}
