#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * @h: input list
 *
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == 0)
	{
	return (number);
	}
	while (h->prev != 0)
	{
	h = h->prev;
	}
	while (h != 0)
	{
	number++;
	h = h->next;
	}
	return (number);
}
