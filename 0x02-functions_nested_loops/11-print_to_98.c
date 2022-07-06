#include "main.h"

/**
 * print - prints variables recursively
 * @n: variable to print
 */
void print(int n);

/**
 * print_to_98 - print all natural numbers from var to 98
 * @var: the starting limit
 */

void print_to_98(int var)
{
	int limit = 98;

	if (var > limit)
	{
		int a;

		for (a = var; a >= limit; a--)
		{
			print(a);
			if (a != limit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int b;

		for (b = var; b <= limit; b++)
		{
			print(b);
			if (b != limit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print - prints
 * @n: variable
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
