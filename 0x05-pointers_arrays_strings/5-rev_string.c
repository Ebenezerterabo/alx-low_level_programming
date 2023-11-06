#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, len = 0, mid;
	char temp;
	char *str = s;

	while (*str)
	{
		len++;
		str++;
	}

	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
