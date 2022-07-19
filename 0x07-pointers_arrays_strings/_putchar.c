#include <unistd.h>

/**
 * _puutchar - writes the character to stdout
 * @c: the character to print
 * Return: 0 as success
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}
