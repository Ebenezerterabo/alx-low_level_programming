#include "main.h"

/**
 * checkPrime - A function to check if a number is prime
 * @n: the number
 * @div: the divisor
 *
 * Return: 1 if true and 0 otherwise
 */

int checkPrime(int n, int div)
{
	if ((div * div) > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (checkPrime(n, div + 1));
}






/**
 * is_prime_number - A function that returns 1 if the input is a
 * prime number.
 * @n: the number
 *
 * Return: 0 if not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (checkPrime(n, 2));
}
