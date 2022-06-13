#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of a string
 * @str: parameter to passed into the function
 *
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int half;

	if (len % 2 == 0)
		half = len / 2;
	else if (len % 2 != 0)
		half = (len - 1) / 2;
	for ( i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
