#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data
 * of a listint_t linked list
 * @head: the pointer to the head node
 *
 * Return: the sum of all the data(n)
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
