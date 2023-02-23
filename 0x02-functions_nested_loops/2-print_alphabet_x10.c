#include "main.h"

/**
 *print_alphabet_x10 - A function that prints 10 times the alphabet
 *in lowercase, followed by a new line
 *
 *Return : Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet;

	int x;

	for (x = 0; x <= 9; x++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar (alphabet);
		}

		_putchar ('\n');

	}
}
