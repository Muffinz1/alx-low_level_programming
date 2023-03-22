#include "main.h"
/**
 * print_to_98 - Counts up to 90
 *
 * @Num: first integer
*/
void print_to_98(int Num)
{
	int count;

	if (Num > 98)
		for (count = Num; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = Num; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
