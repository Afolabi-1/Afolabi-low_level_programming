#include "main.h"

/**
 * _isalpha - checks for lower or upper case
 * @c: character used for checks
 * Return: 1 success 0r 0
 */

int _isalpha(int c);
{
	int upper = (c >= 'A' && c <= 'Z');
	int lower = (c >= 'a' && c <= 'z');

	if (upper || lower)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
