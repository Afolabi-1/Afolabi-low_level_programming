#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints all single digit of base 10 starting from 0
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{ printf("%d", c); }
	putchar('\n');

	return (0);
}
