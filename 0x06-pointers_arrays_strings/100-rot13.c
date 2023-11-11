#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @s: string
 *
 * Return: a pointer to the string
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rev[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rev[j];
				break;
			}
		}
	}

	return (s);
}
