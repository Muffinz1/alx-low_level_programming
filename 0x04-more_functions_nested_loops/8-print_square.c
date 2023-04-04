#include "main.h"
/**
 * print_square - draws a square
 *
 * @size: takes size as input
 *
 * Return: 0 (always success)
*/
void print_square(int size)
{
	int unit = 0;
	int square = 0;

	while (square < size)
	{
		while (unit < size)
		{
		_putchar('#');
		unit++;
		}
		if (unit == size)
		{
		_putchar('\n');
		}
	unit = 0;
	square++;
	}
	if (size == 0)
	{
	_putchar('\n');
	}
}
