#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - A function that prints a string
 * @ap: the pointer to the argument list
 *
 * Return: Nothing
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
}
/**
 * print_all - A function that prints anything
 * @format: the string passed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int not_found = 0;
	const char *ptr = format;
	int arg_count = 0;

	va_list ap;

	va_start(ap, format);

	while (*ptr && arg_count < 9)
	{
		not_found = 0;

		switch (*ptr)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			 print_string(ap);
			break;
		default:
			not_found = 1;
			break;
		}

		if (!not_found && *(ptr + 1))
			printf(", ");
		ptr++;
		arg_count++;
	}
	printf("\n");
	va_end(ap);
}
