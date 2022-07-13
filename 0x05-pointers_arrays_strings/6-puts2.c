#include "main.h"

/**
 * puts2 - return the length of a string
 * @str: variable
 * Return: always 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		for (*str = 0;str + 2;)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
