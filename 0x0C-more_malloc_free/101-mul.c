#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed of digits
 * @str: the string to check
 *
 * Return: 1 if the string of composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: an array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	unsigned long int num1;
	unsigned long int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	printf("%lu\n", num1 * num2);
	return (0);
}
