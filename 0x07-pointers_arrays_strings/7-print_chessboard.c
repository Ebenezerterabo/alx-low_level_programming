#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: a pointer to the array
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
				_putchar(' ');
			else
				_putchar(a[i][j]);


		}

		_putchar('\n');
	}
}
