#include <stdio.h>

/**
 * main - Entry Point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: a program that adds positive numbers
 *
 * Return: Always 0 (Sucess), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

