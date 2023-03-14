#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: Always 0 success and 1 error
 */

int main(int argc, char *argv[])
{
	int ans, num1, num2;

	if (argc <= 1)
	{
		printf("%s\n", "Error");
			return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);


}
