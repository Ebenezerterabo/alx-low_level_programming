#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit
 * to 0 at a given index.
 * @n: the pointer to the number
 * @index: the position of a bit
 *
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= 31)
		return (-1);

	bitmask = ~(1 << index);

	 *n &= bitmask;

	return (1);
}
