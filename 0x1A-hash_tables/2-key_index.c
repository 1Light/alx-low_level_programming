#include "hash_tables.h"

/**
 * key_index - The index at which a key/value pair
 *             will be stored in the hash table array
 * @key: The key
 * @size: Size of the array for the hash table
 *
 * Return: Index of the key.
 *
 * Description: It Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
