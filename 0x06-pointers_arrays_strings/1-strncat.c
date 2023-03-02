#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 *
 * @dest: The destination of the string
 * @src: The source of strings
 * @n: The length of int
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	for (c = 0; dest[c] != '\0'; c++)
	{
		continue;
	}

	for (d = 0; src[d] != '\0' && d < n; d++)
	{
		dest[c + d] = src[d];

	}

	dest[c + d] = '\0';

	return (dest);
}
