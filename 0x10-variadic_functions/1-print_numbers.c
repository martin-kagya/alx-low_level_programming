#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers with a separator
 * @separator: character to separate numbers
 * @n: number of integers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	
	va_start(args, n);
	printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int);
		}
		printf("%s%d", separator, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
