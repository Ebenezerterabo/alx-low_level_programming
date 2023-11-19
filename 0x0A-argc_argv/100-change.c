#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, numCoinsUsed = 0, amount = 0;
	int cents[] = {25, 10, 5, 2, 1};

	int numCoins = sizeof(cents) / sizeof(cents[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		for (i = 0; i < numCoins; i++)
		{
			while (amount >= cents[i])
			{
				amount -= cents[i];
				numCoinsUsed++;
			}
		}
	}

	printf("%d\n", numCoinsUsed);

	return (0);
}
