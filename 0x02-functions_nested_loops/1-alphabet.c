#include "main.h"

/**
 *print_alphabet - A function that prints the alphabet, in lowercase
 *followed by a new line
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha_bet;

	for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
	{
		_putchar (alpha_bet);
	}

	_putchar ('\n');

}
