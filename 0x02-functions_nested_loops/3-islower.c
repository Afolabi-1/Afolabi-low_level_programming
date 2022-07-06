#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character used for checking
 * Return: 1 if lowercase else 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
