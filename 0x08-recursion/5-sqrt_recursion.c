#include "main.h"

/**
 * _sqrt_test - A function that helps to return the natural square
 * @n: first number
 * @num: second number
 *
 * Return: an integer
 */

int _sqrt_test(int n, int num)
{
	if ((num * num) == n)
		return (num);

	if ((num * num) > n)
		return (-1);

	return (_sqrt_test(n, num + 1));
}






/**
 * _sqrt_recursion - A function that returns the natural square
 * root of a number.
 * @n: the number
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_test(n, 1));
}
