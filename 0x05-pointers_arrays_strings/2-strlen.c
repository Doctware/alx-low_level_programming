#include <stdio.h>
#include "main.h"

/**
 * _strlen - founction that print the srting length
 * @s: pointer with adress value
 * Return: @ void
 */

int _strlen(char *s)
{
	int e = 0;

	while (*s != '\0')
	{
		e++;
		s++;
	}

	return (e);
}
