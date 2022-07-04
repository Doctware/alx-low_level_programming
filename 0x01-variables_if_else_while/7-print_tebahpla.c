#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 as success
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
