#include "main.h"

/**
 * largest_number - returns the largest of three numbers.
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: return the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
