#include "lists.h"

/**
 * listint_len - A function that returns the number of element
 * in a linked listint_t list.
 * @h: the pointer to the beginning of the node
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
