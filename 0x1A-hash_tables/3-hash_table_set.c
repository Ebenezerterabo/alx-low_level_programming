#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: The hash table you want to add or update
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: Always 1 Success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode, *current;

	if (!ht || !key || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (newNode->key == NULL || newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode->value);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;

	return (1);
}
