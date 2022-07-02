#include <stdio.h>

/**
 * main - prints all single digits of base 16
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;
	char c;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

