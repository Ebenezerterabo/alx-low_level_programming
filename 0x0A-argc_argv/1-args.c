#include <stdio.h>

/**
* main - A program that prints the number of argument passed into it
* @argc : argument count
* @argv : argument vector
*
* Return: Always 0 success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
