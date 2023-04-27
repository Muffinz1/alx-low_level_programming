#include "lists.h"
/**
 *stlen - function that gets the string length
 *
 *@str: input string
 *Return: length of the string
*/

int stlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (*str++)
	{
	len++;
	}
	return (len);
}
/**
 * print_list - a function that prints a linked list
 *
 *@h: the pointer for the first node
 *Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", stlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i)
}
