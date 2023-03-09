#include "main.h"

/**
 * _prime_number - A function that returns 1 if integr is prime
 * number and return 0 otherwise
 * @n : integer number
 *
 * Return: 1 if the input is prime value or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check(n, i - 1));
}

