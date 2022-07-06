#include "main.h"

/**
 * _isalpha - foucrion to check if c is a letter, lowercase or upercase
 * @c: is the int tha will use for the argument of the founction
 *
 * Return: 0 as success
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
