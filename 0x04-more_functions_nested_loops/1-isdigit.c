#include "main.h"

/**
 * _isdigit - this founction checks for digit from 0-9
 * @c: is the character
 *
 * Return: 1 if c digit and o otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
