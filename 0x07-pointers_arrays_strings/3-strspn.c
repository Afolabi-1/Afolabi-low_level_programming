#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: segment
 * @accept: another segment
 * Return: the lenght of s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
