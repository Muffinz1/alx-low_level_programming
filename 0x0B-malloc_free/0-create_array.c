#include "stdio.h"
/**
 *create_array - entry point to create array
 *@size: size of the array and memory
 *@c: characters intialized
 *
 * Return:1 (false) if null , 0 (always success)
*/
char *create_array(unsigned int size, char c)
{
	char *s = (char*) malloc(size);

	if (size == 0)
	{
		return (0);
	}
	while (size > 0)
	{
		s[size] = c;
		size--;
	}
	return (s);
}
