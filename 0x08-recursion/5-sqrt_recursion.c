#include "main.h"
/**
 * check - checks number from n to base
 * @n: the startin point of check
 * @b: the end point of base
 * Return: n as the sqrt when found -1 for failed attempt
 * and a recursive function
 */
int check(int n, int b)
{
	if (n * n == b)
	{
		return (n);
	}
	if (n * n > b)
	{
		return (-1);
	}
	return (check(n + 1, b));
}
/**
 * _sqrt_recursion - returns the square root of a natural number
 * @n: the base number
 * Return: the recursive function check
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
