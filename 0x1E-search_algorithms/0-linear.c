#include "search_algos.h"

/**
 * linear_search - a function that searches using the Linear search algorithm
 *
 * @array: The array that the value is found within
 * @value: Value that requires searching
 * @size: size of the array and number of elements there
 *
 * Return: return  -1 if not found and v-value  if found
*/

int linear_search(int *array, size_t size, int value)
{
	int new_size = (int)size;
	int v;
	if (array == NULL)
		return (-1);
	for (v = 0; v < new_size; v++)
	{
		printf("Value checked array[%d] = [%d]\n", v, array[v]);
		if (value == array[v])
			return (v);
	}
	return (-1);

}
