#include "3-calc.h"

/**
 * mian - check the code
 * @argc: the argument vector
 * @argv: argument vector
 * Return: Output Arccordingly
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


}
