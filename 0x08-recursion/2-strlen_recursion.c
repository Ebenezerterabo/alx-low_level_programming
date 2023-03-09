#include "main.h"

/**
 * _strlen_recursion - A function that returns the length
 * of a string.
 * @s: string character
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}


