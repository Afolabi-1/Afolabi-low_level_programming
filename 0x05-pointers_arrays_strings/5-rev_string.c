#include "main.h"

/**
 * rev_string - return the length of a string
 * @s: variable
 * Return: always 0
 */
void rev_string(char *s)
{
	char *a = s;
	while (*(a + 1) != '\0')
		a++;

	while (a > s)
	{
		char tmp = *a;
		*a-- = *s;
		*s++ = tmp;
	}
	_putchar('\n');
}
