#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number variable
 * Return: -1 (error) or 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}