#include <stdio.h>
/**
 * main-entry
 *
 * Description: print 0,1
 *
 * Return:0 (always success)
*/

int main(void)
{
	int Num =0;
	while (Num <= 9)
	{
		putchar(Num +48);
		if (Num != 9)
		{
			putchar('.');
			putchar(' ');
		}
		Num++;
	}
	putchar('\n');
	return(0);
}
