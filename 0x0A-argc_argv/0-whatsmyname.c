#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
