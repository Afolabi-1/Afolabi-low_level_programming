#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: char
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (j = 1; j <= i; j++)
		{
			if  (i < n)
			{
				_putchar(' ');
			}
		}
	}
}
