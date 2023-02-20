#include <stdio.h>

/**
 *main - Write a program that prints all possible combination
 *of single-digit numbers
 *numbers must be separated by ,. followed by a space
 *Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar ('0' + number);

		if (number != 9)
		{
			putchar (',');

		}
	}

	putchar ('\n');

	return (0);
}
