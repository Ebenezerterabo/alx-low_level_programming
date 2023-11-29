#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - A function to get the length of a string
 * @str: the pointer to the first character of the string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * new_dog - A function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: all element of new struct created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;

	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	ptr->name = malloc(sizeof(char) * len_name + 1);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * len_owner + 1);

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	ptr->age = age;

	return (ptr);
}
