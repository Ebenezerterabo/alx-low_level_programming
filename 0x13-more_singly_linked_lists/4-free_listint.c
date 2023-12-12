#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: the head pointer
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
