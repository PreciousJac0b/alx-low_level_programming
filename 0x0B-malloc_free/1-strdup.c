#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns the copy of a string
 *
 * @str: string to be copied
 *
 * Return: returns pointer to the copy
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(*str) * strlen(str) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + i) = '\0';

	return (p);
}
