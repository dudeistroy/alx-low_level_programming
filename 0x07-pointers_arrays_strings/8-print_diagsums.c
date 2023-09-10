#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_primary = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
