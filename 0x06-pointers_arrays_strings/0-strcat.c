#include <string.h>
#include "main.h"

/**
 * _strcat - concantates one string to another
 * @src: string to be concanted
 * @dest: pointer to the string to be appended
 *
 * Return: the full string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
