#include <stdio.h>

/**
 * main - A program that prints the number of arguments
 * passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc- 1);
	else
		printf("%d\n", argc - 1);

	return (0);
}
