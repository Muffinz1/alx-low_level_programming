#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - function for reset
 *
 * @n: is the input
 *
 * Return: 0 (always success)
*/

void reset_to_98(int *n)
{
	int *p = n;
	*p = 98;
}
