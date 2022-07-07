#include "main.h"

/**
 * _isdigit - checks if a char is a digit or letter
 * @c: character to be checked
 * Return: 1 if digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
