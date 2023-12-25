#include "3-calc.h"
/**
 * get_op_func - get operator function
 * @s: operator to be get
 * Return: pointer to a function that corespond with the
 * given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i]).op == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
