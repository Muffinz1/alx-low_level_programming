#include "main.h"

/**
 * set_bit - a function that sets the value of a bit
 * to 1 at a given index.
 *
 * @n: number pointer
 * @index: the index to set
 *
 * Return: -1 (fail), 1 (success)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
	return (-1);
	}
	return (!!(*n |= 1l << index));
}
