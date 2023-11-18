#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	int i = 1, j, result = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}

	while (i < argc)
	{

		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}


		result += atoi(argv[i]);

		i++;
	}

	printf("%d\n", result);

	return (0);
}
