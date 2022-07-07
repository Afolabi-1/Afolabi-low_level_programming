#include <stdio.h>

/**
 * main - first 50 numbers in a fibonacci
 *
 * Return: 0 if successful
 */

int main(void)
{
	long int n1 = 1, result, n2 = 2, nlast = 50;
	int ii;

	printf("%lu, %lu, ", n1, n2);
	for (ii = 2; ii < nlast; ii++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (ii != nlast - 1)
			printf(",");
	}
	printf("\n");
	return (0);
}
