#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * and append to the nth byte of the string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be appended
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
