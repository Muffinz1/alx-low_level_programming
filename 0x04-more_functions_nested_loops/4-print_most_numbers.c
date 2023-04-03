#include "main.h"


/**
 * print_most_numbers - prints numbers
 *
 * Description: prints numbers except 0,4
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + 45);
			num++;
		}
		else
		{
			num++;
		}
		_putchar('\n');
	}
}
