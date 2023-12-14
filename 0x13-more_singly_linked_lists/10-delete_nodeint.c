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
 * delete_nodeint_at_index - A function that delete a node
 * at a given position
 * @head: a pointer to the head node
 * @index: the given position
 *
 * Return: Return 1 on success, otherwise 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int len_node;

	current = prev = *head;

	len_node = node_len(*head);

	if (index > len_node)
		return (-1);

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		while (index != 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
	}

	return (1);
}
