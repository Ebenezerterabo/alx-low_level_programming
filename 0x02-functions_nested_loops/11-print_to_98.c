#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: the number
 *
 * Return: Nothing.
 */

void print_to_98(int n)
{
	int count;

	for (count = n; count <= 98; count++)
	{
		if (count == 98)
			printf("%d\n", count);
		else
			printf("%d, ", count);
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
}
