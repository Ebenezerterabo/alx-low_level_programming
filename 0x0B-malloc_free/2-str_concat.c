#include "main.h"
#include <stdlib.h>

/**
 * get_length - A function that gets the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int get_length(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}


/**
 * copy_character - A function that copy a character from one
 * string to the other
 * @dest: the destination
 * @src: the source
 * @len: the length of the string
 *
 * Return: Nothing
 */

void copy_character(char *dest, char *src, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
}


/**
 * str_concat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the newly allocated space with contents
 * of s1 and s2 and NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int total_len, len1, len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = get_length(s1);
	len2 = get_length(s2);

	total_len = len1 + len2 + 1;

	ptr = malloc(sizeof(char) * total_len);

	if (ptr == NULL)
		return (NULL);

	copy_character(ptr, s1, len1);
	copy_character(ptr + len1, s2, len2);

	ptr[len1 + len2] = '\0';

	return (ptr);
}
