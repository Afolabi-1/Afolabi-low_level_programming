#include "main.h"

/**
 * more_numbers - prints 10 times the num for 0 - 14
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int c = 0, b;

	/* first loop */
	while (c < 11)
	{
		/* second loop */
		for (b = 0 ; b < 15 ; b++)
		{
			if (b >= 10)
			{
				_putchar(b/10 + '0');
			}
			_putchar(b%10 + '0');
		}
		_putchar('\n');
		c++;
	}
}
