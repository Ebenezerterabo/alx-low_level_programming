#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list.
 * @head: the pointer to the head node
 *
 * Return: the node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);


	temp = *head;
	*head = temp->next;

	num = temp->n;

	free(temp);

	return (num);
}
