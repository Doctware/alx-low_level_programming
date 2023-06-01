#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n times table starting with 0
 * @n: the varible to work on
 * Return: 0 as success
 */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{
		return;
	}

	int c, d, ans;

	for (c = 0; c <= n; c++)
	{
		for (d = 0; d <= n; d++)
		{
			ans = d * c;
			printf("%4d", ans);
			printf(" ,");
		}
		printf("\n");
	}
}
