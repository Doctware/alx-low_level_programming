#include <stdio.h>

/**
 * main - entry point
 * Description: prints single digit number separated by coma and space
 * Reture: return 0 success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}

	putchar('\n');

	return (0);
}
