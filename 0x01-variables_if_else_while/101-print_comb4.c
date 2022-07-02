#include <stdio.h>

/**
 * main - combinations of three digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n1;

	for (n1 = 0; n1 < 8; n1++)
	{
		int aa;

		for (aa = n1 + 1; aa < 9; aa++)
		{
			int n2;

			for (n2 = aa + 1; n2 < 10; n2++)
			{
				putchar((n1 % 10) + '0');
				putchar((aa % 10) + '0');
				putchar((n2 % 10) + '0');

				if (n1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}
	putchar('\n');

	return (0);
}
