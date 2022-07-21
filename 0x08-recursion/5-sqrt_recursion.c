#include "main.h"

/**
 * sqrt1 - loops through 1 - n to find the root
 * @a: the perfet square
 * @b: starting number that loops
 * Return: -1 if no square root is found
 * 1 if successful
 */
int sqrt1(int a, int b)
{
	/**
	 * doubles b and checks if it
	 * is equal to a.
	 */
	if (b * b == a)
		return (b);
	/**
	 * else if b < a then
	 * a is not a perfect square
	 */
	else if (b * b > a)
		return (-1);
	/**
	 * increments b
	 */
	return (sqrt1(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: perfect square
 *
 * Return: 1 if successful,
 * -1 if no squareroot is found.
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
