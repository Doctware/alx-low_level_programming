#include <stdio.h>

/**
 * main - entry point
 * Discription: print all numbers of base i6 in lowercase
 * Return: rerturn 0 as success
 */

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}

	putchar(10);

	return (0);
}
