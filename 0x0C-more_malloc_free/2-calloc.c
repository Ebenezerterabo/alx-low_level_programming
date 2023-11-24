#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array
 * using malloc.
 * @nmemb: memory for an array
 * @size: size of the datatype
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	char_ptr = ptr;

	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (char_ptr);
}
