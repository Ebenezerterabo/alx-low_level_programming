#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings, followed
 * by a new line.
 * @seperator: the string to be passed to the function
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	while (i < n)
	{
		str = va_arg(ap, char*);
		(str == NULL) ? printf("(nil)") : printf("%s", str);

		if (i < (n - 1) && seperator != NULL)
			printf("%s", seperator);

		++i;
	}

	va_end(ap);
	printf("\n");
}
