#include "main.h"
#include <strlen.h>

/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 2; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
