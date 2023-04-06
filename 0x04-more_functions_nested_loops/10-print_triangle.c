#include "main.h"
/**
 * print_triangle - triangle output
 *
 * @size:inputs the size of triangle
 *
 * Description: prints in each row hash or space
 * depends on the size
 *
 * Return:0 (always success)
*/

void print_triangle(int size)
{
	int step = 1;
	int row = 0;

	if (size <= row)
	{
	_putchar('\n');
	}

	while (row < size)
	{
		while (step <= size)
		{
			if ((step + row) < size)
			{
			_putchar(' ');
			}
			else if ((step + row) >= size)
			{
			_putchar('#');
			}
			step++;
		}
		step = 1;
	_putchar('\n');
	row++;
	}
}
