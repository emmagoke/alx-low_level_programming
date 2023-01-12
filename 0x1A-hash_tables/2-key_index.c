#include "hash_tables.h"

/**
 * key_index - This function compute the index of a key
 * in an hash table.
 * @key: The key
 * @size: The size of the Hash table.
 *
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
