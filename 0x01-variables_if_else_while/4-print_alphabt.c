#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch != 'q' && ch != 'e')
				putchar(ch);
		}

	putchar('\n');

	return (0);
}
