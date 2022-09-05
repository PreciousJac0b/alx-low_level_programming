#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if the input is upper
 * @c: input alphabet
 *
 * Return: 1(upper), 0(otherwise)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
