#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @n: number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last >= 0)
	{
		_putchar(last + '0');
	}
	else
	{
		last = -(last);
		_putchar(last + '0');
	}

	return (last);
}
