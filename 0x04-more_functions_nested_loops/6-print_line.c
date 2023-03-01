#include "main.h"

/**
 *print_line - A function that draws a straight line in the terminal
 *@n: integer used
 *
 *Return: Always 0 success
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');

	}

	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');

		}

		_putchar('\n');

	}

}
