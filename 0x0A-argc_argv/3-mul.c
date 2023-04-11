#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point for argc multiply
 *@argc: arguement count
 *@argv: array of elements
 *Return: 0 (always success)
*/
int main(int argc, char **argv)
{
	int multi = 0;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", multi);
	}
	else
		printf("Error\n");
	return (0);
}
