#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @size: size of array
 * @value: value to be located
 * @array: A pointer for the first element
 * Return: true if found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right;
	size_t l;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
	printf("Searching in array: ");
	for (l = left; l < right; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);

	l = left + (right - left) / 2;
	if (array[l] == value)
		return (l);
	if (array[l] > value)
		right = l - 1;
	else
		left = l + 1;
	}
	return (-1);
}
