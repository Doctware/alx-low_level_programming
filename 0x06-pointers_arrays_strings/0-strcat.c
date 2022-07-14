#include "main.h"

/**
 * *_strcat - this founction concatinate two string
 * @*dest: pointer destination
 * @src: pointer surce
 * Return: @ void
 */

char *_strcat(char *dest, char *src)
{
	int f = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	;

	do {
		f++;
		dest[i] = src[f];
		i++;
	} while (src[f] != '\0');

	return (dest);
}
