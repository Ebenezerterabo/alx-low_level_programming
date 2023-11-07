#include "main.h"

/**
 * _strcpy - A function that copies the string pointed by src,
 * including the terminating null byte.
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return dest;
}
