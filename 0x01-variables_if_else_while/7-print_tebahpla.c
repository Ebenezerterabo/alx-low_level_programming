#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success);
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
