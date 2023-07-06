#include "main.h"
/**
 * factorial - computes the factorial of n
 * @n: number on whose fsctorial is to be found
 * Return: return -1 incase of an error and
 * factorial when successful
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
