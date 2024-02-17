#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: The hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			current = ht->array[i];

			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;

				if (current)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
