#include "main.h"

/**
 * _strlen - A function that calculate the length of a string
 * @str: a pointer to the string
 *
 * Return: the length of the string
 */

int _strlen(const char *str)
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
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, otherwise 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, bitPosition = 0, len;

	if (!b)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += (1 << bitPosition);

		bitPosition++;
	}

	return (result);
}
