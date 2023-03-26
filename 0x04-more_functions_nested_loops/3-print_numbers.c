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

	do {
	_putchar(num + 48);
	num++;
	} while (num >= 0 && num <= 9)
	putchar('\n');
}
