#include "main.h"
#include <string.h>

/**
 * puts2 - prints odd characters in a string
 * @str: string containing characters
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
