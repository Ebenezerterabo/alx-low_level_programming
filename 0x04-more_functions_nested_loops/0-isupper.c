#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 *@c: character
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char ch = c;

	if (ch >= 'A' && ch <= 'Z')
		return (1);

	return (0);
}
