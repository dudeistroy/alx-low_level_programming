#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: The number of command-line arguments
 * @argv: An array of strings cointaining the command-line arguments
 *
 * Description: A program that multiples two integers
 *
 * Return: Always 0 (Sucess), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
