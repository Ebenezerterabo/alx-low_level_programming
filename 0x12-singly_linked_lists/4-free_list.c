#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: the head of the node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *link;

	while (current != NULL)
	{
		link = current->next;
		free(current->str);
		free(current);

		current = link;
	}
}
