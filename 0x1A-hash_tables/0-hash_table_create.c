#include "hash_tables.h"

/**
 * hash_table_create - A function that creates hash table.
 * @size: Size of the array
 *
 * Return: NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
