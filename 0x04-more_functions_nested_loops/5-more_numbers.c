#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers
 *
 * Description: prints numbers 10 times
 *
 * Return: 0 (always success)
*/
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
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
	_putchar('\n');
	}
}
