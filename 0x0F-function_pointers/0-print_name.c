#include "function_pointers.h"

/**
 * print_name - prints name given
 * @name: name given as parameters
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name)
}
