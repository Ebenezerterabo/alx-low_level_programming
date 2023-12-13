#include "lists.h"

/**
 * node_len - A function that calculates the number of nodes
 * in a linked list
 * @head: the pointer to the head node
 *
 * Return: the length of the node
 */

int node_len(listint_t *head)
{
	listint_t *current = head;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}

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
	listint_t *newNode, *temp;
	unsigned int i = 0, len_node;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	len_node = node_len(*head);

	if (idx == 0 || *head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	if (idx > len_node)
		return (NULL);

	temp = *head;

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (temp->next);
}
