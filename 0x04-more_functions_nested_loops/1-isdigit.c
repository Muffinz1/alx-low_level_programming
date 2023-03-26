#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function for checking char
 *
 * @c:the int c
 *
 * Return: 1(always upper) or 0 (always lower)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	return (0);
}
