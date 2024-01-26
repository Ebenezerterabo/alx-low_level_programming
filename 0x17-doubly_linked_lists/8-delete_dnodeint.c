#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that  deletes the node at index
 * (index) of a dlistint_t linked list.
 * @head: pointer to the head node
 * @index: the position to be deleted
 *
 * Return: 1 if it's successful, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current && i < index - 1)
	{
		current = current->next;
		i++;
	}

	current->next->next->prev = current;
	current->next = current->next->next;

	if (current == NULL)
		return (-1);

	return (1);
}
