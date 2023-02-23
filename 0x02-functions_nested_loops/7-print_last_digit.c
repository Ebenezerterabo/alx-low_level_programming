#include "main.h"

/**
 *print_last_digit - A function that prints the last digit of a number
 *@n:the int value to get the last digit from
 *Return: Value of last digit
 */

int print_last_digit(int n)
{
	int y;

	if (n < 0)
	{
		n = -n;
	}

	y = n % 10;

	if (y < 0)
	{
		y = -y;
	}

	_putchar (y + '0');

	return (y);

}
