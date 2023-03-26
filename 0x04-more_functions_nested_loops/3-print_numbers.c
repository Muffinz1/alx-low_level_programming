#include <stdio.h>

/**
 * print_numbers - data entry
 *
 * Describition: prints numbers from 0 to 9
*/

void print_numbers(void)
{
	int num = 0;

	do {
	_putchar(num + 48);
	num++;
	} while (num >= 0 && num <= 9);
	putchar('\n');
}
