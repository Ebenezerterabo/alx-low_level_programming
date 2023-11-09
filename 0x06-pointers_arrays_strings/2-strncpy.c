#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * should work the same as strncpy function
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to overwrite
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
