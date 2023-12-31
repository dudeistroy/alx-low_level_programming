#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of intgers form min to max (inclusive)
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A Pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
