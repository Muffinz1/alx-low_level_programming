#include "main.h"
/**
 * print_binary - a function that prints the binary representation
 * of a number
 *
 * @n: input number to be swapped
*/
void print_binary(unsigned long int n)
{
	int prints = 0;
	int b = sizeof(n) * 8;

	while (b)
	{
		if (n & 1l << --b)
		{
			_putchar('1');
			prints++;
		}
		else if (prints)
		{
			_putchar(48);
		}
	}
	if (prints == 0)
		_putchar(48);

}
