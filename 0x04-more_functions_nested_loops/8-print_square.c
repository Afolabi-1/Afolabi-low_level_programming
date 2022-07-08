#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int jj;

		for (jj = 1; jj <= size; jj++)
		{
			int ii;

			for (ii = 1; ii <= size; ii++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
