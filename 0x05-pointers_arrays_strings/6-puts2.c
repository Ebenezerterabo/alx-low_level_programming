#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * starting with the first character
 * @str: the string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}

		str++;
	}

	_putchar('\n');
}
