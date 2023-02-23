#include "main.h"

/**
 *jack_bauer - A function that prints every minute of the day of
 *of jack bauer, starting from 00:00 to 23:59
 *Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hrs, mints;

	hrs = 0;

	while (hrs < 24)
	{
		mints = 0;

		while (mints < 60)
	{
		_putchar (hrs / 10 + '0');
		_putchar (hrs % 10 + '0');
		_putchar (':');
		_putchar (mints / 10 + '0');
		_putchar (mints % 10 + '0');
		_putchar ('\n');

		mints++;

	}

	hrs++;

	}

}



