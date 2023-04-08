#include "main.h"
#include <stdio.h>

/**
 * _strlen - function for length
 *
 * @s: input array
 *
 * Return: length (always success)
*/
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
