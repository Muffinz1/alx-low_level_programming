#include <stdio.h>
/**
 * main - entry point for argc and argv
 *@argc: arguement counts
 *@argv: arguement value array
*/

int main(int argc,char **argv)
{
	(void)argc;
	printf("%s\n",argv[0]);
	return(0);
}
