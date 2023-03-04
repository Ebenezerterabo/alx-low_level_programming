#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 *
 * @str: string
 * Return: the pointer to the changed str
 */

char *cap_string(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		while (!(str[idx] >= 'a' && str[idx] <= 'z'))

			idx++

			if (str[idx - 1] == ' ' || str[idx - 1] == '\t'
				||  str[idx - 1] == '\n'
				||  str[idx - 1] == ','
				||  str[idx - 1] == ';'
				||  str[idx - 1] == '.'
				||  str[idx - 1] == '!'
				||  str[idx - 1] == '?'
				||  str[idx - 1] == '"'
				||  str[idx - 1] == '('
				||  str[idx - 1] == ')'
				||  str[idx - 1] == '{'
				||  str[idx - 1] == '}'
				|| idx == 0)

				str[idx] -= 32;

				idx++;

	}

	return (str);

}
