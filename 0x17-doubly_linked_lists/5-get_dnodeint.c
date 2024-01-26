#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer of the head node
 * @index: the position to get the node
 *
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
			return (current);

		i++;
		current = current->next;
	}

	if (index >= i)
		return (NULL);

	return (NULL);
}
