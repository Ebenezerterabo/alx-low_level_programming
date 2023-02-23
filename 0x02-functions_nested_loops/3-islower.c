#include "main.h"

/**
 *_islower - A function that checks for lowercase character
 *
 *Return: Always 1 (Success) if character is lower, otherwise 0.
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
