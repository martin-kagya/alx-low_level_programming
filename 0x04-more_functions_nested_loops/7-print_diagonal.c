#include "main.h"
/**
 * print_diagonal - Prints diagonal lines
 *
 * @n: number of lines to print
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; n > 0; i++)
		{
			for (j = i; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			n--;
		}
	}
	_putchar('\n');
}
