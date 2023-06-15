#include "lists.h"

/**
 * sum_dlistint - a function that sums the dlist
 *
 * @head: input node
 *
 * Return: 0 (if list empty)
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != 0)
	{
	while (head->prev != 0)
		{
		head = head->prev;
		}
	while (head != 0)
		{
		sum += head->n;
		head = head->next;
		}
	}
	return (sum);
}
