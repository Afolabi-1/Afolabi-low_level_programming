#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: variable pointer
 * @n: number of arrays
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

		if (i == '\0' - 1)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
