#include "lists.h"

/**
 * print_list - A function that prints all the elements
 * of a list_t list.
 * @h: head of the node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int element = 0;

	if (current == NULL)
		return (-1);

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		element++;
	}

	return (element);
}
