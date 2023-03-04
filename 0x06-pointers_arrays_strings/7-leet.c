#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 *
 * @str: string to encode
 * Return: address of str
 */

char *leet(char *str)
{
	int m, n;

	char a[] = "aAeEoOtTlL";

	char b[] = "4433007711";

	for (m = 0; *(str + m); m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (a[n] == str[m])

				str[m] = b[n];

		}

	}

	return (str);

}
