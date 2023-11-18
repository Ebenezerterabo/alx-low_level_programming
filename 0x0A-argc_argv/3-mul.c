#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	int i = 1, result = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	while (i < argc)
	{
		result *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", result);

	return (0);
}
