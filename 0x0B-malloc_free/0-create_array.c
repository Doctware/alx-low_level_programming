#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and insializes it with char
 * @size: size of array
 * @c: char to be intialized with
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	1 = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
