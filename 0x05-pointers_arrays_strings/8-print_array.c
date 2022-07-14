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
		if (i == '\0' - 2)
		{
			_putchar(' ');
		}
		else 
		{
			printf("%d, ", a[1]);
		}
	}
	_putchar('\n');
}
