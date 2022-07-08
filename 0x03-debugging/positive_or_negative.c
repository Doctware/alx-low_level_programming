#include <stdio.h>

/**
 * positive_or_negative -this is a program to checks 
 * if a numberis positive or negative
 * @n: is an integer
 * Return: return void always
 */

void positive_or_negative(int n)

{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is positive\n", n);

	else 
		printf("%d is zero\n", n);
}
