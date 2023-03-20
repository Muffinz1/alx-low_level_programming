#include <stdio.h>
/**
 * main -entry point
 *
 * Description: printing 4 combinations
 *
 * Return: 0 (always success)
 *
*/
int main(void)
{
	int Num1 = 0;
	int Num2;

	while (Num1 <= 99)
	{
		Num2 = Num1;

			while (Num2 <= 99)
			{
				if (Num2 != Num1)
				{
				putchar((Num1 / 10) + 48);
				putchar((Num1 % 10) + 48);
				putchar(' ');
				putchar((Num2 / 10) + 48);
				putchar((Num2 % 10) + 48);
					if (Num1 != 98 || Num2 != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
				Num2++;
			}
			Num1++;
	}
	putchar('\n');

	return (0);
}
