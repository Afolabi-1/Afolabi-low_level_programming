#include "main.h"

/**
 * _isupper - checks whether 'c' is lower or upper case
 * @c: character to checked
 * Return: 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

