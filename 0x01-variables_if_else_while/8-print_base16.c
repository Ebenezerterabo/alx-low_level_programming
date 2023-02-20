#include <stdio.h>

/**
 *main - Write a program that prints all the numbers of base 16 in lowercase
 *followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	int number;
	char ch;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}

	putchar ('\n');

	return (0);
}
