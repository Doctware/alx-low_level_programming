#include "main.h"
#include <stdio.h>

/**
 * _puts - this founction print a string
 * to the standard output
 * @str: pointer with the adress value
 * Return: @ void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

		_putchar('\n');
}
