#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}

	return (s + 1);
}
