#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x
 * raised to the power of y.
 * @x: Base number
 * @y: Exponent number
 *
 * Return: answer as integer
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	power = _pow_recursion(x, y - 1);
	return (x * power);
}
