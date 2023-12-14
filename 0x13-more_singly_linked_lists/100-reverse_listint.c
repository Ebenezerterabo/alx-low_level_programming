#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t
 * linked list
 * @head: the pointer to head node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;

	tmp = *head;
	tmp2 = NULL;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp;
	}

	*head = tmp2;

	return (*head);
}
