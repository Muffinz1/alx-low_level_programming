#include "lists.h"
/**
 *add_node - adds a node to this linked list
 *
 *@head: it includes the pointer address
 *@str: strings
 *
 *
 *Return: the size of list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (0);
	if (str)
	{
		new_head->str = strdup(str);

		if (!new_head->str)
		{
		free(new_head);
		return (0);
		}
		new_head->len = stlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);

}
