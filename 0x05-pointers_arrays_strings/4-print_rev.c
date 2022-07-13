#include "main.h"

/**
 * print_rev - return the length of a string
 * @s: variable
 * Return: always 0
 */
void print_rev(char *s)
{
	int len = _strlen(s[0]);
	int i, j;
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		s[1][i] = str[0][j];
	}
	_putchar(s[1];
	_putchar('\n');
}
