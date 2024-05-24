#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array
 * of integers using the jump search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: -1 if no value is found or array is empty
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t min = 0, i = 0, jump = sqrt(size);

	if (array == NULL)
		return (-1);

    /* Using jump search algorithm to get the nearest index */
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	while (array[jump] < value)
	{
		if (min >= size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", min, jump);
			printf("Value checked array[%ld] = [%d]\n", min, array[min]);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		min = jump;
		jump = jump + sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", min, jump);
    /* Finding the value using linear search when it's close */
	for (i = min; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
