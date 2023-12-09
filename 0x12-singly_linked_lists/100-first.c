#include <stdio.h>

/**
 * first - A function to be executed before main
 *
 * Return: Nothing
 */

void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
