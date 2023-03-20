#include <stdio.h>
/**
 * main - entry point
 *
 * Description: hexadecimal
 *
 * Return: 0 (always success)
*/

int main(void)
{	int number = 48;
	while (number <= 102)
	{
		putchar(number);
		if (number == 57)
			number += 39;
		number++;
	}
	putchar('\n');
	return (0);
}
