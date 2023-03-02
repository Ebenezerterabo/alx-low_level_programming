#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 *
 * @str: string
 * Return: the string str
 */

char *cap_string(char *str)
{
	int k = 0, l;

	char a[] = "\t\n,:.!?\"(){}";

	while (*(str + k))
	{
		if (*(str + k) >= 'a' && *(str + k) <= 'z')
		{
			if (k == 0)

				*(str + k) -= 'a' - 'A';

				else
				{
					for (l = 0; l <= 12; l++)
					{
						if (a[l] == *(str + k - 1))

							*(str + k) -= 'a' - 'A';

					}

				}
		}
		k++;
	}
	return (str);
}
