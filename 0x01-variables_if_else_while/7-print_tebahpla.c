#include <stdio.h>
/**
 * main - entry point
 *
 * Description: for char put
 *
 * Return: 0 (always success)
*/

int main(void)
{	char ch = 'z';
	while (ch >= 'a')
	{
		putchar (ch);
		ch--;
	}
	putchar ('\n');
	return (0);
}
