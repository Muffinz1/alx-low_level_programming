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
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
/*bigger alphabets*/

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
putchar ('\n');
	return (0);
}
