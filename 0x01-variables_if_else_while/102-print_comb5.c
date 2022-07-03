#include <stdio.h>

/**
 * main - prints combinations of digits in number 10
 *
 * Return: 0 if successful
 */

int main(void)
{
	int var1;

	for (var1 = 0; var1 < 99; var1++)
	{
		int var2;

		for (var2 = var1 + 1; var2 < 100; var2++)
		{
			putchar((var1 / 10) + '0');
			putchar((var1 % 10) + '0');
			putchar(' ');
			putchar((var2 / 10) + '0');
			putchar((var2 % 10) + '0');

			if (var1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar('\n');
	return (0);
}
