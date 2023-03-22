#include "main.h"

/**
 * print_alphabet_x10-uses _putchar
 *
 * Description: prints alphabet
 *
 * Return: 0 (always success)
*/
void print_alphabet_x10(void)
{
	int line, x;

		for (line = 0; line <= 9 ; line++)
		{
			for (x = 'a'; x <= 'z'; x++)
				_putchar(x);
			_putchar('\n');
		}

}
