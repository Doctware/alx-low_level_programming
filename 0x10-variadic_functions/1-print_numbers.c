#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers with a separator
 * @separator: spare numbers
 * @n:int, number od undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);
for (i = 0; i < n; i++)
{
	printf("%i", va_arg(list, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);
putchar('\n');
}
