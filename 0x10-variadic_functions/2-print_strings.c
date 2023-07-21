#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string arguments with a separator
 *
 * @separator: - thing to print between strings
 * @n: - number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *separand;

	if (separator == NULL || *separator == 0)
	{
		separand = "";
	}
	separand = (char *) separator;
	if (n > 0)
	{
		printf("%s", va_arg(args, char *)); 
		for (i = 1; i < n; i++)
		{
			char *pointer = va_arg(args, char *);
			if (pointer == NULL)
			{
				pointer = "(nil)";
			}
			printf("%s%s", separand, va_arg(args, char *));
		}
	}
}
