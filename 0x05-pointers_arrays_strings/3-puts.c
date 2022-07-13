#include "main.h"

/**
 * _puts - return the length of a string
 * @str: variable
 * Return: always 0
 */

int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(stdout, *str);
		str++;
	}
	_putchar(stdout, '\n');

	return (i);
}
