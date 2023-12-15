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
	unsigned long int bitNum, bitIndex = 31;
	int i, found = 0;

	for (i = bitIndex; i >= 0; i--)
	{
		bitNum = (n >> i) & 1;

		if (bitNum == 1)
			found = 1;

		if (found)
			_putchar(bitNum + '0');
	}

	if (!found)
		_putchar('0');
}
