#include "lists.h"
/**
 *add_node_end - adds a node in the last "tail" to this linked list
 *
 *@head: it includes the pointer address
 *@str: strings
 *
 *
 *Return: the size of list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = malloc(sizeof(list_t));
	list_t *tail = *head;

	if (!head || !new_tail)
		return (0);
	if (str)
	{
		new_tail->str = strdup(str);

		if (!new_tail->str)
		{
		free(new_tail);
		return (0);
		}

		new_tail->len = stlen(new_tail->str);
	}
	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
