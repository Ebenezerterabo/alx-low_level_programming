#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: name
 * @f: the function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == '\0' || f == NULL)
		return;

	f(name);
}
