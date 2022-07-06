#include "main.h"


/**
 * _islower - check if a letter is lowercase
 * @c: is the int that will use for the argument of the founction
 * Return: return 0 as susscces
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
