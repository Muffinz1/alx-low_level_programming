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
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
