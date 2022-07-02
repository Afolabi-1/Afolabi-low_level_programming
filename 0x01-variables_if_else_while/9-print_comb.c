#include <stdio.h>

/**
 * main -  prints combinations of single-digit numbers.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a & 10) + '0');
		if (a >= 0 && a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar('\n');

	return (0);
}
