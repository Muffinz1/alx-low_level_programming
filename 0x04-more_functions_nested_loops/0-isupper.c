#include <stdio.h>
#include "main.h"

/**
 * _isupper - function for checking char
 *
 * @c:the int c
 *
 * Return: 1(always upper) or 0 (always lower)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		{
		return (1);
		}
	else if (c >= 97 && c <= 122)
		{
		return (0);
		}
}
