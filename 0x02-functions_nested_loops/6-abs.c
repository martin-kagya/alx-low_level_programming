#include "main.h"
/**
 * _abs - prints absolute value of a digit
 * @c: the integer for operation
 * Return: returns absolute value of an integer
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absolute = c * -1;

		return (absolute);
	}
	return (c);
}
