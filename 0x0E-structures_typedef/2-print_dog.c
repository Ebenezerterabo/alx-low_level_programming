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

	(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
