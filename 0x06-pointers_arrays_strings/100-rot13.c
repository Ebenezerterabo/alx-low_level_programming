#include "main.h"

/**
 *rot13 - encodes a string into rot13
 *
 *@str: string to encode
 *Return: str as address
 */

char *rot13(char *str)
{
	int q, r;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (q = 0; *(str + q); q++)
	{
		for (r = 0; r < 52; r++)
		{
			if (a[r] == *(str + q))
			{
				*(str + q) = b[r];

				break;

			}

		}

	}

	return (str);

}

