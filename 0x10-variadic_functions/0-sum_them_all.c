#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: variable
 * Return: the sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);
	if (in == 0)
		return (0);
	j = 0;
	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (j);
}
