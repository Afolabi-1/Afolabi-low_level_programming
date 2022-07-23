#include <stdio.h>

/**
 * main - prints out numberof arguments
 * @argc: argument count
 * @argv: argument vector or array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
