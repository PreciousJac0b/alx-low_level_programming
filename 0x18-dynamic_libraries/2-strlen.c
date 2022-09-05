#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string length to be returned
 *
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		++len;

	return (len);
}
