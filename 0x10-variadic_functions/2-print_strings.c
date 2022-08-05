#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - prints strings, followed by a new line.
* @separator: pointer to a string to be printed between strings
* @n: first string fro the list of strings to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  va_list args;
  
  va_start(args, n);
  
  for (i = 0; i < n; i++)
  {
    printf("%s", va_arg(args, char));
    
    if ( i < n - 1 && separator != NULL)
      printf("%s", separator);
  }
  putchar('\n');
  va_end(args);
}
