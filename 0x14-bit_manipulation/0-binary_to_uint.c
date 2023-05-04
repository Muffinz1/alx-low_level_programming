#include "main.h"
/**
 * binary_to_uint - is a function that converts a binary number
 * to an unsigned int
 *
 * @b: the binary value used
 * Return: 0 (fail b is null), unsigned value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int intg = 0;

	if (b == 0)
		return (0);
	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);
		intg = intg * 2 + (*b++ - 48);
	}
	return (intg);
}
