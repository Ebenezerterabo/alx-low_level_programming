#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}

	putchar('\n');

	return (0);
}
