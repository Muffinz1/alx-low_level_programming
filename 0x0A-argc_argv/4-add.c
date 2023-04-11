#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point for sum of args
 *
 *@argc: arguements count
 *@argv: array of arguements
 *
 *Return: 0 (success), 1 (Error)
*/
int main(int argc, char **argv)
{
	int sum;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		sum = sum + atoi(argv[i]);
	}
		printf("%i\n", sum);
		return (0);
}
