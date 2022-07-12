#include "main.h"

/**
 * puts_half - main founction.
 * @str: pointer, the string of numbers to print.
 * Description: this founction print half of the string.
 * Return: nul.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
