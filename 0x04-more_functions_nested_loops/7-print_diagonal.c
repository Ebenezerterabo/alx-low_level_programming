#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * Where n is the number of times \ should be printed
 * The diagonal should end with a \n
 * @n: the number of characters to be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row - 1; col++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');

		}


	}

}
