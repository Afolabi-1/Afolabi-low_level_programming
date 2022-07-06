#include "main.h"

/**
 * main - Entry Point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char var1[] = "_putchar";
	int i;

	/* Gets the length of the array */
	int varlen = sizeof(var1) / sizeof(var1[0]);

	for (i = 0; i < varlen - 1; i++)
	{
		_putchar(var1[i]);
	}
	_putchar("\n");
	return (0);
}
