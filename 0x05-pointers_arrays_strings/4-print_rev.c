#include "main.h"

/**
 * print_rev - return the length of a string
 * @s: variable
 * Return: always 0
 */
void print_rev(char *s)
{
	while (*s <= '0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
