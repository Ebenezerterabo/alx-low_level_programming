#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, mult;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			mult = a * b;

			if (b == 0)
				_putchar(mult + '0');

			if (mult < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
