#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to sum numbers in parameters
 * @n: number of arguments to be passed
 * Return: 0 when n is zero and sum upon success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
