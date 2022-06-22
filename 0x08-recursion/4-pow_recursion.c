#include "main.h"

/**
 * _pow_recursion - returns the yth power to a X number
 * @x: Number power to be calculated
 * @y: The power X is raised to
 *
 * Return: yth power of the xth variable
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
