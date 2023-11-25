#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block
 * using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: is the size in bytes of the allocated space
 * for ptr
 * @new_size: is the size of the new block in memory
 *
 * Return: a pointer to ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrNew;
	char *ptrOld;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	ptrNew = malloc(new_size);

	if (ptrNew == NULL)
		return (NULL);

	ptrOld = ptr;

	if (new_size > old_size)
	{
		for (idx = 0; idx < old_size; idx++)
			ptrNew[idx] = ptrOld[idx];
	}

	if (new_size < old_size)
	{
		for (idx = 0; idx < new_size; idx++)
			ptrNew[idx] = ptrOld[idx];
	}

	return (ptrNew);
}
