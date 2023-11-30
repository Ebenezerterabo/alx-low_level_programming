#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum
 * of all its parameters.
 * @n: numbers
 *
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
