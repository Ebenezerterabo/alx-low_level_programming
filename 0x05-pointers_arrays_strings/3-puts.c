#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line
 * @str: string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
