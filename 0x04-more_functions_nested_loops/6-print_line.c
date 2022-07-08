#include "main.h"

/**
 * print_line - this fonuction draw a strait line
 * @n: is the number of time character be printed
 *
 * Return: 0 as success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}

	}
	_putchar('\n');

}
