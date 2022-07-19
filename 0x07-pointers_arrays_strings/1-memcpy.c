#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _memcpy - function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: bytes
 * @n: number of bytes to fill
 * Return: always 0
 */

char *_memcpy(char *s, char *b, unsigned int n)
{
	return (memcpy(s, b, n));
}
