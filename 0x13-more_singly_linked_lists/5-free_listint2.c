#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: the pointer to the head node
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp,  *current;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
