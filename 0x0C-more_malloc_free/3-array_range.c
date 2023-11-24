#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 *
 * Return: the pointer to the newly allocated array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, min++)
		ptr[i] = min;

	return (ptr);

}
