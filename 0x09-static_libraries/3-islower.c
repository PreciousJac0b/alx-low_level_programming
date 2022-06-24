#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - check for lowercase character.
 * @c: The character to check for
 *
 * Return: 1 if @c is lowercase otherwise 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
