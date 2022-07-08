#include "main.h"

/**
 * print_numbers - this founction prints the numbers 0-9
 * in new line
 * Return: @ 0 success
 */

void print_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
		_putchar('\n');
}
