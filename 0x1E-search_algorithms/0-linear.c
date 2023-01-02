#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches an array for an int using linear search
 * @array: array to be traversed.
 * @size: size of array.
 * @value: value to be searched for
 *
 * Return: imteger found(Success), -1 on failure.
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
