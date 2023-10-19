#include "main.h"

/**
 * rot13 - encoding string
 * @s: pointing to the var of he str
 * Return: Success
 */

char *rot13(char *s)
{
	char *ro13 = s;
	char shift;

	while (*s)
	{
		shift = (*s >= 'a' && *s <= 'z') ? 'a' : 'A';
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = (*s - shift + 13) % 26 + shift;
		}

		s++;
	}
	return (ro13);
}
