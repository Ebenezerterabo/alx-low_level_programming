#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: a pointer to the array of integers
 * @n: number of element in the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;

		i++;
	}

}
