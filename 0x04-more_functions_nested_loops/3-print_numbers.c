#include <stdio.h>

/**
 * print_numbers(void)- data entry
 *
 * Describition: prints numbers from 0 to 9
 *
 * Return: 0 (success)
*/

void print_numbers(void)
{
	int num = 0;
	int max = 9;

	for (num <= max, num++)
	{
		_putchar(num + 48);
	}
}
