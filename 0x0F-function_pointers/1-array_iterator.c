#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - excution of functions on each array element
 *
 *@array: array given
 *@size: size given
 *@action: function excution on array as a function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && action && size)
	{
		while (array <= last)
		{
		(*action)(*array++);
		}
	}
}
