#include "main.h"
#include "string.h"
#include "stdio.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string s
 * @c: character c
 * Return: the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
