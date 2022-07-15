#include <string.h>
#include "main.h"

/**
 * _strncpy - copies two string
 * @dest: string1
 * @src: string2
 * @n: number of times it can be copied
 *
 * Return: copies two string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
