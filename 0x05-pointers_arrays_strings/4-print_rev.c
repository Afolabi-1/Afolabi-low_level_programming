#include "main.h"

/**
 * print_rev - return the length of a string
 * @s: variable
 * Return: always 0
 */
void print_rev(char *s)
{
	char *a = s;
	while (*(a + 1) != '\0')
		a++;

	while (a > s)
	{
		char tmp = *a;
		*a-- = *s;
		*s++ = tmp;
	}
	_putchar('\n');
}
