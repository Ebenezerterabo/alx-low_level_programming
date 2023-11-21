#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: the column
 * @height: the rows
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **rows;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	rows = malloc(sizeof(int *) * height);

	if (rows == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		rows[i] = malloc(sizeof(int) * width);

		if (rows[i] == NULL)
		{

			for (j = 0; j < height; j++)
				free(rows[j]);

			free(rows);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			rows[i][j] = 0;
	}

	return (rows);
}
