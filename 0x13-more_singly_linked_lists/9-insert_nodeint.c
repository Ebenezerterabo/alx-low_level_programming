#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a node
 * at a given position
 * @head: a pointer to the head node
 * @idx: the given position
 * @n: the number
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp, *current;
	unsigned int count = 0, i = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	temp = *head;

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;

	return (temp->next);
}
