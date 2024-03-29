#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: the number of bytes to be allocated
 * @c: the character
 *
 * Return: a pointer to the array, or NULL if its fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
