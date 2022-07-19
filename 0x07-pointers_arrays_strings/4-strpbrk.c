#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: stringi
 * @accept: string to match
 * Return: pointer to the byte in 's' that matches one of the bytes 'accept'
 * or NULL if mo such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
