#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning
 * of a list_t list.
 * @str: string
 * @head: the head of the node
 *
 * Return: NULL on error or the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode->str);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);

	newNode->next = *head;
	*head = newNode;

	return (*head);
}
