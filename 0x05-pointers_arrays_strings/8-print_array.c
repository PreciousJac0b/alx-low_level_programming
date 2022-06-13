#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements in the array
 * @n: number of elements to be printed
 * @a: array containing element
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 1)
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d\n", a[i]);
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
