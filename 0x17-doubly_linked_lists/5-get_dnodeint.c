#include "lists.h"
/**
 * get_dnodeint_at_index - a function that retrives the node index
 *
 * @head: node input
 * @index: index input
 * Return: the required head at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == 0)
	{
	return (NULL);
	}
	while (head->prev != 0)
	{
	head = head->prev;
	}
	while (head != 0)
	{
	if (i == index)
		{
		break;
		}
	head = head->next;
	i++;
	}
	return (head);

}
