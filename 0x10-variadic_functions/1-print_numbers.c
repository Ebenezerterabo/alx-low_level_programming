#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed
 * by a new line.
 * @seperator: the string to be printed between numbers
 * @n: the numbers of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, num;

	va_start(ap, n);

	while (i < n)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);

		++i;
	}

	printf("\n");

	va_end(ap);

}

