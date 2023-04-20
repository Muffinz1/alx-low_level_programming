#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers and follows by a new line
 * @...:rest of enteries
 * @separator: the string to be printed between numbers
 * @n: arguement counts for var
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
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
	printf("%i%s", va_arg(list, int),
	count ? (separator ? separator : "") : "\n");
	}
	va_end(list);
}
