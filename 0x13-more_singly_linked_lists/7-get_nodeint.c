#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list
 * @head: the pointer to the head
 * @index: the position
 *
 * Return: the nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head, *temp;
	unsigned int count = 0, i = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	if (index > count)
		return (NULL);

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
