#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 * @a: an array of integers
 * @n: the number of element to swap
 *
 * Return:  nothing.
 */

void reverse_array(int *a, int n)
{
	int y, b, c;

	for (y = 0, b = (n - 1); y < b; y++, b--)
	{
		c = a[y];
		a[y] = a[b];
		a[b] = c;
	}
}
