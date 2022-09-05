#include "main.h"

/**
 * _memset - fills the first n bytes with char
 * @s: string to be filled up
 * @b: char to be filled in the string
 * @n: number of bytes to be filled up
 *
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *d;

	d = s;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (d);
}
