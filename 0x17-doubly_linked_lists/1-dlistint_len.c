#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to the head node
 *
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}

	return (count);
}
