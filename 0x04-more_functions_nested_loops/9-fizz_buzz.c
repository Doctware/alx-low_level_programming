#include <stdio.h>

/**
 * main - To print fizz buzz
 * @void: 0 argument
 * Return: 0 as success
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 5 == 0)
		{
			printf("Fizzbuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
