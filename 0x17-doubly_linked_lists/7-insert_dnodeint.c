#include "lists.h"

/**
 * len_node - A function that returns the length of a doubly
 * linked list.
 * @head: pointer to the head node
 *
 * Return: the length of the node
 */

int len_node(dlistint_t *head)
{
	dlistint_t *current = head;
	int count = 0;

	if (head == NULL)
		return (0);

	while (current)
	{
		count++;
		current = current->next;
	}

	return (count);
}

/**
 * insert_dnodeint_at_index - A function that inserts a new node
 * at a given position.
 * @h: pointer to the head node
 * @idx: position to insert the node
 * @n: integer data
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;
	unsigned int node_len, i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	node_len = len_node(*h);
	temp = *h;

	if (idx == 0 || *h == NULL)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
	}

	if (idx > node_len)
		return (NULL);

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;


	return (newNode);
}
