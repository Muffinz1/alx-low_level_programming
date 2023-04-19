#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function which prints the names
 *
 *@name: input pointer for string
 *@f: input function for calling
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	(*f)(name);
	}
}
