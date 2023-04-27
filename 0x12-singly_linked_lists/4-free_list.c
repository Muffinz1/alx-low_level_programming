#include "lists.h"
/**
 * free_list - a function that frees the linked lists
 *
 *@head: a pointer for the addresses
*/
void free_list(list_t *head)
{
	list_t *node;
	list_t *next_node;

	if (head == 0)
		return;
	node = head;

	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
