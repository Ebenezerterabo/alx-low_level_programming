#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0, alpha = 97;

	while (count < 16)
	{
		if (count >  9)
		{
			putchar(alpha);
			alpha++;
		}
		else
			putchar(count + '0');

		count++;
	}

	putchar('\n');

	return (0);
}
