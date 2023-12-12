#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end
 * of a listint_t list
 * @head: the head pointer
 * @n: the number
 *
 * Return: the address of the new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = newNode;
	}

	return (*head);
}
