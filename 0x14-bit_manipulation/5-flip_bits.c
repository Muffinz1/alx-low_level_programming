#include "main.h"
/**
 * flip_bits -  number of bits you would need to flip
 * to get from one number to another
 * @m: numbers for flipping
 * @n: numbers for flipping
 *
 * Return: flip bits numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int value = n ^ m;

	while (value)
	{
		if (value & 1ul)
		{
		num++;
		}
		value = value >> 1;
	}
	return (num);
}
