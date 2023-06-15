#include "lists.h"
/**
 * add_dnodeint - add a node
 *
 * @head: input head
 *
 * @n: input int
 * Return: new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
	{
	return (NULL);
	}
	new->n = n;
	new->prev = 0;
	h = *head;
	if (h != 0)
	{
		while (h->prev != 0)
		{
		h = h->prev;
		}
	}
	new->next = h;
	if (h != 0)
	{
	h->prev = new;
	}
	*head = new;
	return (new);
}
