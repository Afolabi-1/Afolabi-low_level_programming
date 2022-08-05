#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @*seperator: string to be printed between numbers
 * @n: is the number of integers
 * Return: all numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int value = va_args(args, unsigned int);
		printf("%d%c",value,*seperator);
	}
	printf("\n");

	va_end(args);
}
