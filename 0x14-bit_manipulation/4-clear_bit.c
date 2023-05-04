#include "main.h"

/**
 * clear_bit - a function that clears the bits
 *
 * @index: index to set
 * @n: pointer to n
 * Return: -1 (fail), 1 (succes)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (*n & 1l << index)
		{
		*n ^= 1l << index;
		}
	return (1);
}
