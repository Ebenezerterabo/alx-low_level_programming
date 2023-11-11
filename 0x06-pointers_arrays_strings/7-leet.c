#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @str: string
 *
 * Return: a pointer to the string
 */

char *leet(char *str)
{
	int i, j;
	char original[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int size = sizeof(original);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == original[j])
				str[i] = leet[j];
		}
	}

	return (str);
}
