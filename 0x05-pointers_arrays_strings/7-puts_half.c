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
	mid = len / 2;


	for (j = mid; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
