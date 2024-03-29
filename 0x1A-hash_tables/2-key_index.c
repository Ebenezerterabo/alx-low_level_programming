#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2((unsigned char *)key);

	return (hash_val % size);
}
