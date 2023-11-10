#include "main.h"

/**
 * separator - A function that handles special characters
 * @c: the character to be checked
 *
 * Return: 1 or 0
 */


int seperator(char c)
{
	if (c == ' ' || c == ',' || c == ';' || c == '.' || c == '!' ||
	    c == '?' || c == '"' || c == '(' || c == ')' || c == '{' ||
	    c == '}' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}



/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: string
 *
 * Return: a pointer to the string
 */

char *cap_string(char *str)
{
	int i, word_start = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
			str[i] = ' ';
		else if (seperator(str[i]))
			word_start = 1;
		else
		{
			if (word_start)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 'a' + 'A';

				word_start = 0;
			}
		}
	}

	return (str);
}
