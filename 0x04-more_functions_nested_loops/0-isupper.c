#include "main.h"

/**
 * _isupper - this function check for uppercase characters
 * @c: is the character
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
