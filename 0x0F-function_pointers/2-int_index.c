#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for integers
 *@array: array of integers
 *@size: size of elements of array
 *@cmp: comparing values
 *
 *Return: -1 (no element match or size = 0)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array && cmp && size)
	{	while ( index < size)
		{
			if(cmp(array[index]))
			return (index);
			index++;
		}
	}
	return (-1);
}
