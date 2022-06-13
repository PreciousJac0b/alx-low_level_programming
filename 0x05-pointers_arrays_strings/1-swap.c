#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: an integer to be swapped
 * @b: second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	_putchar('\n');
}
