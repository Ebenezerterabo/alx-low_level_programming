#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in sorted array
 * of integers using the binary search algorithm
 *
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, mid, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);


	while (left <= right)
	{
		printf("Seaching in array: ");
		/* Print the subarray from left to right */
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		putchar('\n');

		mid = left + (right - left) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
