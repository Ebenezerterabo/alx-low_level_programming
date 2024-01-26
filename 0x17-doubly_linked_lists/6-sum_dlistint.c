#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data(n)
 * of a dlistint_t linked list
 * @head: pointer to the head node
 *
 * Return: sum of nodes data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int total = 0;

	if (head == NULL)
		return (0);

	while (current)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
