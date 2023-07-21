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
	char *pointer;
	char *separand = "";

	if (separator == NULL || *separator == 0)
	{
		separand = "";
	}
	else
	{
		separand = (char *) separator;
	}
	va_start(args, n);
	if (n > 0)
	{
		printf("%s", va_arg(args, char *)); 
		for (i = 1; i < n; i++)
		{
			pointer = va_arg(args, char *);
			if (pointer == NULL)
			{
				pointer = "(nil)";
				printf("%s%s", separand, pointer);
			}
			else
			{
				printf("%s%s", separand, pointer);
			}
		}
	}
	printf("\n");
	va_end(args);
}
