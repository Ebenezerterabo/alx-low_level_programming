#include <stdio>
#include "main.h"

/**
 *_putchar - prints the character c to standout
 *@c: The character to print
 *
 *Return: on success 1.
 *on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

