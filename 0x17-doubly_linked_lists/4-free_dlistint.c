#include "lists.h"
/**
 * free_dlistint - free the double linked list
 *
 * @head: input head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *carry;

	if (head != 0)
	{
	while (head->prev != NULL)
		{
		head = head->prev;
		}
	}
	while ((carry = head) != NULL)
	{
	head = head->next;
	free(carry);
	}
}
