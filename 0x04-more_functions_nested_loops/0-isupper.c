#include "main.h"

/**
 *_isupper - A function that checks for uppercase character
 *@c: integer used
 *Return: 1 if c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

