#include "main.h"

/**
 * print_most_numbers - this founctions print most numbes 0-9
 * except for 2 and 4
 * Return: 0 as success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		_putchar(i + '0');
	}
		_putchar ('\n');
}
