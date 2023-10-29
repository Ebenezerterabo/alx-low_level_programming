#include <stdio.h>

/**
 * main - A program that prints all possible different combination of
 * three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		j = i + 1;
		while (j < 10)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

			if (j != 8 || i != 7 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}

			}

			j++;

		}
	}

	putchar('\n');

	return (0);
}
