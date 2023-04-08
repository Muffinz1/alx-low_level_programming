#include <stdio.h>
#include "main.h"
/**
 * print_rev - rev the array
 *
 * @s: input array
*/

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	*s--;
	while (length > 0)
	{
	_putchar(*s--);
	length--;
	}
	_putchar('\n');
}
