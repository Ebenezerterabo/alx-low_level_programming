#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number
 * @n: integer value
 *
 * Return: natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}


/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @y: iterator
 *
 * Return: the resulting square root
 */
int check_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (check_recursion(x, y + 1));
}

