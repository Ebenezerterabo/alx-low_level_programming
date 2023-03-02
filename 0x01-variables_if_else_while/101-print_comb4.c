#include <stdio.h>

/**
 *main - A program that prints all possible different combinations
 *of three digits.
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		for (dig2 = 1; dig2 <= 9; dig2++)
		{
			for (dig3 = 2; dig3 <= 9; dig3++)
			{
				if (dig 3 > dig2 && dig2 > dig 1)
				{
					putchar('0' + dig1);
					putchar('0' + dig2);
					putchar('0' + dig3);

					if (dig1 != 7 || dig2 != 8)
					{
						putchar(',');
						putchar(' ');

					}

				}

			}

		}

	}

	putchar('\n');

	return (0);

}


}
