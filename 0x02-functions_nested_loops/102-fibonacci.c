#include <stdio.h>

/**
 *main - A program that prints the first 50 fibonacci numbers
 *starting with 1 and 2, followed by new line.
 *Return: 0 (Success)
 */

int main(void)
{
	int count;

	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo2;

		printf("%lu", sum);

		fibo1 = fib2;

		fibo2 = sum;

		if (count == 49)

			printf("\n");

			else

				printf(",");

	}

	return (0);

}
