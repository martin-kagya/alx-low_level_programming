#include "main.h"
/**
 * _pow_recursion - raises int x to the power of y
 * @: the base number
 * @y: the power to be raised to
 * Return: -1 when y is less than 0, 1 when y is 0
 * and x to the power y when x is geater than 0
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
	return (x * _pow_recursion(x, y - 1));
}
