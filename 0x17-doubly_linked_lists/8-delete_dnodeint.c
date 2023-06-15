#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a desired node at index
 *
 * @head: input head node
 * @index: desired index input
 * Return: 1 (always success). -1 (fail)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1, *head2;
	unsigned int i = 0;

	head1 = *head;
	if (head1 != 0)
	{
	while (head1->prev != 0)
		{
		head1 = head1->prev;
		}
	}
	while (head1 != 0)
	{
	if (i == index)
		{
		if (i == 0)
			{
			*head = head1->next;
			if (*head != 0)
			{
				(*head)->prev = 0;
			}
			}
		else
			{
			head2->next = head1->next;
			if (head1->next != 0)
				{
				head1->next->prev = head2;
				}
			}
		free(head1);
		return (1);
		}
	head2 = head1;
	head1 = head1->next;
	i++;
	}
	return (-1);
}
