#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime nuber
 * @resp: int
 * @n: int
 * Return: 0 or 1
 */
int check_prime(int n, int resp);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all numbe < n id they can devide it
 * @n: int
 * @resp: int
 * Return: int
 *
 */

int check_prime(int n, int resp)
{

if (resp >= n && n > 1)
	return (1);
else if (n % resp == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, resp + 1));
}
