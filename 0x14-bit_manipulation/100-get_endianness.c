#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 if big endian, otherwise 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *ptr = (char *)&i;

	return ((*ptr) ? 1 : 0);
}
