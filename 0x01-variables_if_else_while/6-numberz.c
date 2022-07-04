#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 as success
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
