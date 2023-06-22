#include "main.h"
/**
 * print_line - prints - n number of times
 * @n: integer to use
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
