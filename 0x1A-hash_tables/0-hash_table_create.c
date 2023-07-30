#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 *
 * @size: an input for the array size
 *
 * Return: a pointer to the newly created hash_table, NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n;
	hash_table_t *h_t;

	h_t = malloc(sizeof(hash_table_t));
	if (h_t == 0)
		return (NULL);

	h_t->size = size;
	h_t->array = malloc(sizeof(hash_node_t *) * size);
	if (h_t->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		h_t->array[n] = NULL;

	return (h_t);
}
