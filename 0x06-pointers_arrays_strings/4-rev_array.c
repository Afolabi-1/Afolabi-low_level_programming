#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse the content of an array
 * @a: pointer to array
 * @n: number of elements in ans array
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, arr;

	n = n - 1;
	while (i <= n)
	{
		arr = a[i];
		a[i++] = a[n];
		a[n--] = arr;
	}
}

