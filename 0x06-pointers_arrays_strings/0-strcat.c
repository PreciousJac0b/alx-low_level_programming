#include "main.h"
#include <stdio.h>

/**
 * _strcat() - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 *
 * Return: a pointer to the returning string dest
 */
char *_strcat(char *dest, char *src)
{
	char *d;

	if (*src != '\0')
	{
		d = dest;
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	return (d);
}
