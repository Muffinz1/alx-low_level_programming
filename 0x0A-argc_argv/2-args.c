#include <stdio.h>
/**
 * main - entry point for printing argc
 * all on different lines
 *
 *@argc: arguement count
 *@argv: arguements values on array
 *
 *Return: 0 (always success)
*/
int main(int argc, char **argv)
{
	int i = 0;

	while (argc > 0)
	{
	argc--;
	i++;
	}
	while (i > argc)
	{
	printf("%s\n", argv[argc]);
	argc++;
	}
	return (0);
}
