#include "main.h"

/**
 * print_rev - return the length of a string
 * @s: variable
 * _strlen - returns the length of a string
 * Return: always 0
 *
 */
int _strlen(char *s)
{
	int i;
	
	for (i = 0; s[i];)
		i++;
	return (i);
}
void print_rev(char *s)
{
	l = _strlen(*s);

	for (*s[1] = '\0';l >= 0;l--)
	{
		_putchar(*s[1]);
	}
	
}
