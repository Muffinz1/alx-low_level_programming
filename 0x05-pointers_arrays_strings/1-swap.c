#include "main.h"
#include <stdio.h>

/**
 * swap_int - function for swap
 *
 * @a: first int
 * @b: second int
 *
 * Return: 0 (always success)
*/

void swap_int(int *a, int *b)
{
	int *Num1 = a;
	int *Num2 = b;
	int holder = *a;

	*Num1 = *b;
	*Num2 = holder;
}
