#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 *
 * @str: string
 * Return: the string str
 */

char *cap_string(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] == ' '
			|| str[n] == '\t'
			|| str[n] == '\n'
			|| str[n] == '.'
			|| str[n] == ','
			|| str[n] == '!'
			|| str[n] == '?'
			|| str[n] == '"'
			|| str[n] == '('
			|| str[n] == ')'
			|| str[n] == '{'
			|| str[n] == '}')

			{
				n++;

				if (str[n] >= 'A' && str[n] <= 'Z')

					n++;

					else if (str[n] >= 'a' && str[n] <= 'z')
						str[n] = str[n] - 32;

						a--;

			}

			else if (str[0] >= 'a' && str[0] <= 'z')

				str[0] = str[0] - 32;

	}

	return (str);

}
