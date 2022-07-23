#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: arg counts
 * @argv: arg vector
 *
 * Return: Error and 1 if there is only 1 arguments,
 * 0 if successful
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
