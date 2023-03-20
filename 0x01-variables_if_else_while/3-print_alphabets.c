#include <stdio.h>
/**
 * main - entry point
 *
 * Description: for char put
 *
 * Return: 0 (always success)
*/

int main(void)
{	char ch = 'a';
	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');

	char CH = 'A';

	while (CH <= 'Z')
	{
		putchar (CH);
		CH++;
	}
	putchar ('\n');
	return (0);
}
