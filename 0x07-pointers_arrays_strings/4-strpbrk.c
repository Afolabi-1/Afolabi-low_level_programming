#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: segment
 * @accept: another segment
 * Return: the first occurence in s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
