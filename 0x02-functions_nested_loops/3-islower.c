#include "main.h"

/**
 * _islower - A function that checks for lowercase character.
 * @c: character
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
			return (1);
	}

	return (0);

}
