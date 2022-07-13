#include "main.h"

/**
 * _puts - return the length of a string
 * @str: variable
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
