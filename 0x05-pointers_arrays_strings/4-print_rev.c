#include "main.h"

/**
 * print_rev - this founction print string in reverse
 * @s: parneter for adress
 * Return: 0 as success
 */

void print_rev(char *s)
{
	int count = 0;

		while (s[count])
		{
			count++;
		}

			count--;

			for (; count >= 0; count--)
			{
				_putchar(s[count]);
			}

			_putchar('\n');

}
