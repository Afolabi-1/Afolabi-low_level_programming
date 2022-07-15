#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings but with n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be copied
 *
 * Return: full string(dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src , n);

	return (dest);
}
