#include "main.h"

/**
 * print_binary - A function that prints the binary
 * representation of a number
 * @n: the number
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int num, bitIndex = 31;
	int i, found = 0;

	for (i = bitIndex; i >= 0; i--)
	{

		num = n & (1 << i);

		if (num)
		{
			_putchar('1');
			found = 1;
		}
		else if (found || i == 0)
			_putchar('0');
	}
}
