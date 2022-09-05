#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for lowercase and uppercase character.
 * @c: The character to check for
 *
 * Return: 1 if @c is a letter, lowercase or uppercase otherwise 0.
 */
int _isalpha(int c)
{
	if (islower(c) || isalpha(c))
		return (1);
	return (0);
}
