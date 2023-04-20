#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to print opcode
 * @argc: arguements count
 * @argv: arguements values in an array
 *
 *
 * Return: 0 (always success)
*/
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int a;

	if (argc != 2)
	{
	printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
	printf("Error\n");
	exit(2);
	}
	while(a--)
	{
	printf("%02hhx%s", *ptr++, a ? " " : "\n");
	}
	return (0);

}
