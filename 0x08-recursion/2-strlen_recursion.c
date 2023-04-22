#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that returns the length of a string
 *
 *@s : string input
 * Return: count
*/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > 0)
	{
		count += _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
