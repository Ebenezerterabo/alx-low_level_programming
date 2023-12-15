#include "main.h"

/**
 * get_bit - A function that returns the value of a bit
 * at a given index
 * @n: the number
 * @index: the position of bit
 *
 * Return: the value of the bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, result;

	if (index >= 31)
		return (-1);

	mask = 1 << index;

	result = n & mask;

	if (result != 0)
		return (1);
	else
		return (0);
}
