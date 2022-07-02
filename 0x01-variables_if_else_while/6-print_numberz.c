#include <stdio.h>

/**
 * main - prints all single digit of base 10 starting from 0
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{ putchar((a % 10) + '0'); }
	putchar('\n');
	return (0);
}
