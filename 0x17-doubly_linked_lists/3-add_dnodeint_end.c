#include "lists.h"
/**
 * add_dnodeint_end - a function that Adds node at the end
 *@n: input n
 *@head: input head
 *
 * Return:  the address of the new element if fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
	{
	return (NULL);
	}
	new->n = n;
	new->next = 0;
	h = *head;
	if (h != 0)
	{
	while (h->next != 0)
		{
		h = h->next;
		}
	h->next = new;
	}
	else
	{
	*head = new;
	}
	new->prev = h;
	return (new);
}
