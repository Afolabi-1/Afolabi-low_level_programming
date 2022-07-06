#include "main.h"

/**
 * times_tables - prints the nine times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, j, nums;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			nums = i * j;
			if (j == 0)
				_putchar('0' + nums);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + nums);
			}
			else
			{
				_putchar('0' + (nums / 10));
				_putchar('0' + (nums % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
