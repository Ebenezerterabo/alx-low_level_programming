#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse, followed by
 * a new line.
 * @s: string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0, i;
	char *str = s;


	while (*str)
	{
		len++;
		str++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
