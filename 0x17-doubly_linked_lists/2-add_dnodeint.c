#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: pointer of the head node
 * @n: integer data
 *
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}

	return (newNode);
}
