#include "lists.h"

/**
 * print_dlistint - a function that prints the double list
 *
 * @h: input pointer
 *
 * Return: the number
*/
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	if (h == 0)
	return (num);
	while (h->prev != 0)
	{
	h = h->prev;
	}
	while (h != 0)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}
	return (num);
}
