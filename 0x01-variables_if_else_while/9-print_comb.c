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
		putchar(count + '0');

		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}

		count++;
	}

	putchar(' ');

	return (0);
}
