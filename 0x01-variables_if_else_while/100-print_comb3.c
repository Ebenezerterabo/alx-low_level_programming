#include <stdio.h>

/**
 * main - A program that prints all possible different combination of
 * two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (j != 9 || i != 8)
			{
				putchar(',');
				putchar(' ');
			}

			j++;

		}
	}

	putchar('\n');

	return (0);
}
