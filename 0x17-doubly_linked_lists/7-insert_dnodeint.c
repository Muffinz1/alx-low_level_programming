#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a node at index
 * @h: input node
 * @idx: index
 * @n: input n
 * Return: the address of the new node or null
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new;
	unsigned int i;

	new = 0;
	if (idx == 0)
	{
	new = add_dnodeint(h, n);
	}
	else
	{
	head = *h;
	i = 1;
	if (head != 0)
		{
		while (head->prev != 0)
		{
		head = head->prev;
		}
		}
	while (head != 0)
		{
		if (i == idx)
			{
			if (head->next == 0)
			{
			new = add_dnodeint_end(h, n); }
			else
			{
			new = malloc(sizeof(dlistint_t));
			if (new != NULL)
			{
				new->n = n;
				new->next = head->next;
				new->prev = head;
				head->next->prev = new;
				head->next = new; }}
			break; }
		head = head->next;
		i++; } }
	return (new); }
