#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers from 0 t0 9
 * Do not print 2 and 4
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		else
			_putchar(num + '0');
	}

	_putchar('\n');
}
