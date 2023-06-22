#include "main.h"
/**
 * print_triangle - prints triangle with #
 * @size: number of times the triangle should be printed
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		k = i + 1;
		j = size - i - 1;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
