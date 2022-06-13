#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98
 * @n: parameter pointing to value
 *
 * Return: returns updated value of pointer
 */
void reset_to_98(int *n)
{
	*n = 98;
	_putchar('\n');
}
