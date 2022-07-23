#include <stdio.h>

/**
 * main - print all argument it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line argument
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
