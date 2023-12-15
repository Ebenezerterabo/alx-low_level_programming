#include "main.h"

/**
 * set_bit - A function that sets the value of a bit
 * to 1 at a given index.
 * @n: the pointer to the number
 * @index: the position of a bit
 *
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= 31)
		return (-1);

	bitmask = 1UL << index;

	 *n |= bitmask;

	return (*n);
}
