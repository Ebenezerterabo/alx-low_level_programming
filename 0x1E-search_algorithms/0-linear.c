#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: index where the value is located or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
