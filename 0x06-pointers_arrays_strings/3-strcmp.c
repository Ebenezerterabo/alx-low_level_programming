#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: the integer value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
		return (0);

	return (*s1 - *s2);
}
