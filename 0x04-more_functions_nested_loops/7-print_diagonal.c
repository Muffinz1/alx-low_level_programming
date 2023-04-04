#include "main.h"
/**
 * print_diagonal - function
 *
 * @n : number of dashes to be printed
 *
 * Description : prints diagonal line
 *
 * Return : 0 (always success)
*/
void print_diagonal(int n)
{
	int space = 0;
	int dash = 0;

	while (dash < n)
	{
	while (space < dash)
	{
	_putchar(32);
	space++;
	}
	_putchar(92);
	_putchar('\n');
	dash = dash + 1;
	space = 0;
	}
}

