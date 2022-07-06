#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char var1;

	for (var1 = 'a'; var1 <= 'z'; var1++)
	{
		_putchar(var1);
	}
	_putchar('\n');
}
