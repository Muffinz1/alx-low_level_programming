#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 *
 *@h: node pointer
 *
 * Return: list size
*/
size_t list_len(const list_t *h)
{
	size_t T = 0;

	while (h)
	{
	h = h->next;
	T++;
	}
	return (T);
}
