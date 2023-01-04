#include <stdio.h>
#include <math.h>

/**
 * jump_search - Finds an element in an array using Jump search algorithm
 * @array: Array to be searched.
 * @size: size of @array
 * @value: Value being searched for in the array.
 *
 * Return: Index of value on Success, -1 on failure.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	start = 0;
	end = sqrt(size);

	if (!array || !value)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	while (array[end] < value && end  < size)
	{
		start = end;
		end = end + sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i <= end; i++)
	{
		if (i > (size - 1))
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
