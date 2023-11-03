#include "main.h"

/**
 * print_numbers - A function that prints the numbers from 0 to 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');

		num++;
	}

	_putchar('\n');
}
