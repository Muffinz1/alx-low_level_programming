#include "main.h"
/**
 * print_line - draw lines
 *
 * @n: number of lines
 *
 * Return: 0 (always success)
 *
*/
void print_line(int n)
{
	if (n <= 0)
	{
	;
	}
	while (n > 0)
	{
	_putchar(95);
	n = n - 1;
	}
	_putchar('\n');
}
