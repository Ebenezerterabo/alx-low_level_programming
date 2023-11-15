#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: the main string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *str2 = haystack;
		char *str1 = needle;

		while (*str1 != '\0' && *str1 == *str2)
		{
			str1++;
			str2++;
		}

		if (*str1 == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
