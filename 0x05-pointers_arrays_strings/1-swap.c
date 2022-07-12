#include "main.h"

/**
 * swap_int - founcion that swap two inegers
 * @a: change to value of b
 * @b: change to the value of a
 * Return: @ void
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
