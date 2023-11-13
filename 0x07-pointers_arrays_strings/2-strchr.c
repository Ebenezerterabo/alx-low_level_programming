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

		if (*s + 1 == c)
			break;

		s++;
	}

	return (NULL);
}
