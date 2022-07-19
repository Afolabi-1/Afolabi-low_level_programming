#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: sentence
 * @needle: substring
 * Return: the first occurence in s
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
