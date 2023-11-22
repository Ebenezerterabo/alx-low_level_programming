#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments
 * of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string otherwise NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, index = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;

		total_len++;
	}

	ptr = malloc(sizeof(char) * total_len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[index] = av[i][j];
			index++;
		}

		ptr[index] = '\n';
		index++;
	}

	ptr[index] = '\0';
	return (ptr);
}
