#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print the last digit of the number stored in the variable n
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	else if (last_num < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}

	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}

	return (0);
}
