#include "main.h"

/**
 * print_last_digit - founction that prints the last digit of a number
 * @c: the number in question
 * Return: return the value of the llast digit
 */

int print_last_digt(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
