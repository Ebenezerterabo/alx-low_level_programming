#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: pointer 1
 * @src: pointer 2
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;

	}

	*dest = '\0';

	return (s);
}
