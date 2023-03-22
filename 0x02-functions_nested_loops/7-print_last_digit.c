#include "main.h"

/**
 * print_last_digit- prints last value
 *
 * @n: the int to check
 *
 * Return: last number (always success)
 */

int print_last_digit(int n)
{
	int lastnumber;

	if (n < 0)
	lastnumber = -1 * (n % 10);
	else
	lastnumber = n % 10;
	_putchar(lastnumber + 48);
	return (lastnumber);
}
