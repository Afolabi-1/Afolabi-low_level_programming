#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: variable
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i];)
		i++;

	return (i);
}
