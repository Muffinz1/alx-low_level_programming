#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Description: prints numbers 10 times
*/

void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		int Num = 0;

		while (Num < 15)
		{
			if (Num > 9)
			{
			_putchar(Num / 10 + 48);
			}
			_putchar(Num % 10 + 48);
			Num++;
		}
		if (i == 9)
		;
		else
		{
			_putchar('\n');
		}
	}
}

