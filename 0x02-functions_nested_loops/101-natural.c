#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 < 1024
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a, add;

	for (a = 3; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			add += a;
	}
	printf("%d\n", add);
	return (0);
}
