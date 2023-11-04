#include <stdio.h>

/**
 * main - A program that prints the numbers from 1 to 100
 * multiples of three print Fizz and multiple of five print Buzz
 * multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			printf("FizzBuzz ");
		else if (count % 3 == 0)
			printf("Fizz ");
		else if (count % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", count);

		count++;
	}


	return (0);
}
