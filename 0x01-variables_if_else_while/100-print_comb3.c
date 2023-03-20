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
	int Num1 = 0;
	int Num2;

	while (Num1 <= 9)
	{
		Num2 = 0;
		while (Num2 <= 9)
		{
			if (Num1 != Num2 && Num1 < Num2)
			{
				putchar(Num1 + 48);
				putchar(Num2 + 48);

				if (Num1 + Num2 != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
			Num2++;
		}
		Num1++
		}
	putchar('\n');
	return (0);
}
