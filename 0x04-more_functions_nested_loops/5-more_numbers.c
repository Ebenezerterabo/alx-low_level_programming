#include "main.h"

/**
 * more_numbers - A function that prints 10 times the number from 0 to 14
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9 && num <= 14)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
		}

		_putchar('\n');
	}
}
