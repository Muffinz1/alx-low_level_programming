#include <stdio.h>
/**
* main - Entry point
*
* Description: Size of function usage
* Return: Always 0 (Success)
*
*/
int main(void)
{
	printf("Size of a char:%ubyte(s)\n", sizeof(char));
	printf("Size of an int:%ubyte(s)\n", sizeof(int));
	printf("Size of a long int:%ubyte(s)\n", sizeof(long int));
	printf("Size of a long long int:%ubyte(s)\n", sizeof(long long int));
	printf("Size of a float:%ubyte(s)\n", sizeof(float));
	return (0);
}
