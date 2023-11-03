#include "main.h"

/**
 * _isdigit - A function that checks for a digit 0 through to 9
 *@c:character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
