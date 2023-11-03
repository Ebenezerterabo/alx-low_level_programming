#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: number times '_' will be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int num = 0;

	while (num < n)
	{
		_putchar('_');

		num++;
	}

	_putchar('\n');
}
