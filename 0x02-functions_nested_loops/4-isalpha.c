#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: character
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _isalpha(int c)
{
	char ch, ch1;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
			return (1);
	}

	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
		if (c == ch1)
			return (1);
	}

	return (0);

}
