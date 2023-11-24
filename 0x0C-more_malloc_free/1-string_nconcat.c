#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - A function to calculate the length of a string
 * @str: the string
 *
 * Return: the string length
 */

unsigned int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: the number of characters to be appended
 *
 * Return: a pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int dest_len, i, j, len_total;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest_len = _strlen(s1);

	if (n >= _strlen(s2))
		n = _strlen(s2);

	len_total = n + dest_len + 1;

	ptr = malloc(sizeof(char) * len_total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';

	return (ptr);
}
