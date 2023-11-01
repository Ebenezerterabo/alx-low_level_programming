#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer.
 * @n: number
 *
 * Return: number
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);

	return (n);
}
