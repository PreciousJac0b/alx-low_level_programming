#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: input to be checked
 * 
 * Return: 1 if @c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
