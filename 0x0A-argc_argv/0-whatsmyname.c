#include <stdio.h>
/**
 * main - entry point for argc and argv
 *@argc: arguement counts
 *@argv: arguement value array
 *Return:0 (always success)
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
