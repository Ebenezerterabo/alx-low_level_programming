#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - A function that prints anything
 * @c: character
 * @i: integer
 * @f: float
 * @s: string
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i, c;
	double f;
	char *s;
	const char *ptr = format;
	int not_found;

	va_list ap;

	va_start(ap, format);

	while (*ptr)
	{
		not_found = 0;
		switch (*ptr)
		{
			{
				case 'c':
					c = va_arg(ap, int);
					_putchar(c);
					break;
			}

			{
				case 'i':
					i = va_arg(ap, int);
					printf("%d", i);
					break;
			}

			{
				case 'f':
					f = va_arg(ap, double);
					printf("%f", f);
					break;
			}

			{
				case 's':
					s = va_arg(ap, char *);
					if (s != NULL)
						printf("%s", s);
					else
						printf("(nil)");
					break;
			}

			{
				default:
					not_found = 1;
					break;
			}

		}

		if (!not_found && *(ptr + 1))
			printf(", ");

		ptr++;
	}

	va_end(ap);
	printf("\n");
}
