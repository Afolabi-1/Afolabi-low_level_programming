#include "main.h"

/**
 * cap_string - capitalizes all strings
 * @n: string
 *
 * Return: capitalized string
 */

char *cap_string(char *n)
{
	int i;

	/*capitalize first char of string*/
	for (i = 0; n[i] != '\0'; i++)
	{
		/* check if first char is lowercase */
		if (i == 0)
		{
			if (n[i] >= 'a' && n[i] <= 'z')
				n[i] = n[i] - 32;
			continue;
		}
		if (n[i] == ' ' || n[i] == '\n' || n[i] == '\t' || n[i] == '!' || n[i] == 44 || 
				n[i] == 46 || n[i] == 59 || n[i] == '?' || 
				n[i] == '(' || n[i] == ')' || n[i] == '{' ||
				n[i] == '}')/*space*/
		{
			++i;
			/*check if next char is lower case after space*/
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] = n[i] - 32;
				continue;
			}
		}
		else
		{
			/* all other upper case should be lower */
			if (n[i] >= 'A' && n[i] <= 'Z')
				n[i] = n[i] + 32;
		}
	}

	return (n);
}
