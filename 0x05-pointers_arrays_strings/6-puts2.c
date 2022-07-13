#include "main.h"

/**
 * _puts2 - return the length of a string
 * @str: variable
 * Return: always 0
 */
void _puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str + 2;
	}
	_putchar('\n');
}
