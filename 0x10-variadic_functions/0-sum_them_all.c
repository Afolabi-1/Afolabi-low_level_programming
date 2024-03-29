#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: variable
 * Return: the sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j += va_arg(args, int);
	}
	va_end(args);

	return (j);
}
