#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by
 * a new line.
 * @str: string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0, j, mid, len;

	while (str[i])
	{
		i++;
	}

	len = i;

	if (len % 2 == 1)
		mid = len - 1 / 2;
	else
		mid = len / 2;

	for (j = mid; j < len; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
