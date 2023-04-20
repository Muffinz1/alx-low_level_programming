#include "variadic_functions.h"
/**
 * print_strings - function that prints the strings
 *
 * @...: rest of strings to print
 * @separator: the string to be printed between numbers
 * @n: arguement counts for variables
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	int count = n;
	va_list list;

	if (n == 0)
	{
		printf("\n");
			return;
	}
	va_start(list, n);
	while (count--)
	{
		printf("%s%s", (string = va_arg(list, char *)) ? string : ("nil"),
		count ? (separator ? separator : "") : "\n");
	}
	va_end(list);
}
