#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the substring
 *
 * Return: a pointer to the byte in s or NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

	}

	return (NULL);
}
