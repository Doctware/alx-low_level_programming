#include <stdio.h>

/**
 *main - this foinction print prime factors
 *@void: no argument
 *Return: 0 as success
 */
int main(void)
{
	long i, number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
