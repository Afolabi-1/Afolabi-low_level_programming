#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: arg counts
 * @argv: arg vector
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc >= 1)
	{
		for (counter = 0; counter < argc; counter++)
		{
			printf("%s\n", argv[counter]);
		}
	}

	return (0);
}
