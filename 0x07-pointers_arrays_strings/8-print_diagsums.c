#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the 2D array
 * @size: size of the matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, firstsum = 0, secondsum = 0;

	for (i = 0; i < size; i++)
	{
		firstsum += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		secondsum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", firstsum, secondsum);
}
