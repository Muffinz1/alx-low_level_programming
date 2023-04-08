#include "main.h"
#include <stdio.h>

/**
 * _puts - fucntion the prints characters
 *
 * @str: string input
 *
 * Return: printed letters
*/
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
