#include "main.h"

/**
 * print_most_numbers - does not print 2 and 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int c;

	/* the main code */
	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2')
		{
			continue;
		}
		else if (c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
