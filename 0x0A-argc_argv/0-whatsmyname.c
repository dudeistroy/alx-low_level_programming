#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A program that prints its name
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
