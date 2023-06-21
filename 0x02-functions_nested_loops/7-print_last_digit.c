#include "main.h"
/**
 * print_last_digit - Prints the last lagit of an integer
 * @l: The integer we will operate on
 * Return: returns the last digit
 */
int print_last_digit(int l)
{
	int n = l % 10;

	if (l < 0)
	{
		int last = l % 10;

		_putchar(l +'0');
		return (last);
	}
	_putchar(n + '0');
	return (n);
}
