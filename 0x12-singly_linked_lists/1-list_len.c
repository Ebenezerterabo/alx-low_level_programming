#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list
 * @h: head of the node
 *
 * Return: number of element in linked_list
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int element = 0;

	while (current != NULL)
	{
		element++;
		current = current->next;
	}

	return (element);
}
