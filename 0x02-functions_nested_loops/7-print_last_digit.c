#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number
 *  @num: last digti
 *  Return: always 0
 */

int print_last_digit(int num)
{
	int result;

	if (num < 0)
		result = -1 * (num % 10);
	else
		result = num % 10;
	_putchar ((result) + '0');

	return (result);
}
