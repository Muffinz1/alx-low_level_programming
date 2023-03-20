#include <stdio.h>
/**
 * main - entry point
 *
 * Description: for numberz by put
 *
 * Return: 0 (always success)
*/

int main(void)
{	int X = 0;
	while (X <= 9)
	{
		putchar(X + '0');
		X++;
	}
	putchar('\n');
	return (0);
}
