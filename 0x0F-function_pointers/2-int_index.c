#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to cmp values
 *
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}
