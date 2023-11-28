#include "dog.h"
#include <stdio.h>
/**
 * print_dog - A function that prints a struct dog
 * @d: a pointer to the struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name) ? printf("Name: %s\n", d->name) : printf("(nil)");
	(d->age) ? printf("Age: %f\n", d->age) : printf("(nil)");
	(d->owner) ? printf("Name: %s\n", d->owner) : printf("(nil)");
}
