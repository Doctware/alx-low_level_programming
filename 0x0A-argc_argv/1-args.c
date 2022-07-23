#include <stdio.h>
/**
 * main - print the number of argument passed int it.
 * @argc: number of commands line argument.
 * @argv: array that contains the program command line argument.
 * Return: 0 as success.
 */

int main(int argc, char argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	
	return (0);
}
