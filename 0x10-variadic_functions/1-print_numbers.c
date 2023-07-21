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
	char *separand;

	va_start(args, n);
	printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		if (separator == NULL || *separator == 0)
		{
			separand = "";
		}
		separand = (char *) separator;
		printf("%s%d", separand, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
