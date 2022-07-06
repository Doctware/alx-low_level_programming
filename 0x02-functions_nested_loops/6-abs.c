#include "main.h"
#include <stdio.h>

/**
 * _abs - founction that compute the absolute value of an integer
 * @c: is the int that will use for the argument of the founction
 * Return: 0 as success
 */

int _abs(int c)

{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

