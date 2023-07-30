#include "hash_tables.h"

/**
 * key_index - Get the Index at_Which a key/value
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int djb_style = hash_djb2(key) % size;

	return (djb_style);
}
