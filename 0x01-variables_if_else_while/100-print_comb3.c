#include <stdio.h>

/**
 * main - prints combinations of two digits
 *
 * Return: always 0 (succes)
 */

int main(void)
{
	int a;

	for (a = 0; a < 9; a++)
	{
		int b;

		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a != 8)
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
