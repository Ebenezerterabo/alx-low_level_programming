#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end
 * of a list_t list.
 * @str: the string
 * @head: the head of the node
 *
 * Return: NULL on error, otherwise the address of the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode = malloc(sizeof(list_t));

	list_t *current = *head;

	if (endNode == NULL)
		return (NULL);

	endNode->str = strdup(str);

	if (endNode->str == NULL)
	{
		free(endNode);
		return (NULL);
	}

	endNode->len = strlen(str);

	endNode->next = NULL;

	if (*head == NULL)
		*head = endNode;
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = endNode;
	}

	return (endNode);
}
