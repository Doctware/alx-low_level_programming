#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seprator, const unsigned int n, ...);
void print_strings(const char *seprator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

/**
 * struct printtTypeStruct - structure definition of a printTtypeStruct
 * @type: type
 * @printer: function tp print
 */

typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;

#endif
