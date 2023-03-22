#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int Num, Multi, Result;

	for (Num = 0 ; Num <= 9; Num++)
	{
		_putchar(48);
		for (Multi = 1; Multi <= 9; Multi++)

		_putchar('.');
		_putchar(' ');

		Result = Num * Multi;
		if (Result <= 9)
		_putchar(' ');
	else
	_putchar((Result / 10) + 48);
	_putchar((Result % 10) + 48);
	}
	_putchar('\n');
}
