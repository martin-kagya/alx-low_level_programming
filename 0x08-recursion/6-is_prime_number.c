#include "main.h"
/**
 * is_prime_number - checks if int n is a prime number
 * @n: number to be checked
 * Return: returns 1 when prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 5 == 0 || n % 7 == 0
			n % 3 == 0)
	{
		return (0);
	}
	return (1);
	return (is_prime_number(n - 1));
}
