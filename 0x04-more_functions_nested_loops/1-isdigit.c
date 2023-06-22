#include "main.h"
/**
 * _isdigit - Checks if n is digit
 * @c: the paramter to be checked
 * Return: 0 if it is not a digit and 1 if it is
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
