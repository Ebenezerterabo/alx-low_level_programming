#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure with dog details
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function Prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
