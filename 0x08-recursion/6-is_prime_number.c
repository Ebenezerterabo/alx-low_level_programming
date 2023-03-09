#include "main.h"

/**
 * checker - checks to see if number is prime
 * @i : integer 1
 * @m : integer 2
 * Return: integer
 */

int checker(int i, int m)
{
	if (m < 2 || m % i == 0)
		return (0);

	else if (i > m / 2)
		return (1);

	else
		return (checker(i + 1, m));

}

/**
 * is_prime_number - function states if number is prime
 * @n : integer
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
