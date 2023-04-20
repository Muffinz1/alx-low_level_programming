#include "variadic_functions.h"

/**
 * sum_them_all - a function to sum every input
 *
 * @n:arguments input count
 * @...:rest of args values
 *
 * Return: 0 if n == 0, else integer sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;
	va_list q;

	if (n == 0)
		return (0)

	va_start(q, n);

	while (i--)
	{
		sum += va_arg(q, int);
	}

	va_end(q);
	return (sum);
}
