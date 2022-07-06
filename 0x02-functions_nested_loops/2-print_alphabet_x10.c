#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	/* Defines how many times */
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
