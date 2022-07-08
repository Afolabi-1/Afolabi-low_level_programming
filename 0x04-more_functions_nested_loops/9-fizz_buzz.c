#include <stdio.h>

/**
 * main - main function
 * checks through numbers from 1 - 100
 * and print number if it is not a multiple of 3 or 5
 * print fizz if its a multiple of 3
 * buzz if its a multiple of 5
 * and fizz buzz if its both a multiple of 3 and 5
 *
 * Created by: Jonah Jockthan
 * cc: 7th july, 2022
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		printf(" ");
	}
	printf("\n");

	return (0);
}
