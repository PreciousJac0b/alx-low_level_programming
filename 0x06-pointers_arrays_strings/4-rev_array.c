#include "main.h"

/**
 * reverse_array - reverses an array of ints
 * @a: array passed in
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j++;
	}
}
