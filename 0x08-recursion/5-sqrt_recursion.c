#include "main.h"

/**
 * checker - checks for the square root
 * @x : integer 1
 * @y : integer 2
 *
 * Return: the natural square root of a number
 */

int checker(int x, int y)
{
	if (x * x == y)
		return (x);

	if (x * x > y)
		return (-1);

	return (checker(x + 1, y));
}

/**
 * _sqrt_recursion - A function that returns the natural square
 * root of a number.
 * @n: integer value
 *
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker(1, n));
}
