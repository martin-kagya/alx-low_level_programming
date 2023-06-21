#include "main.h"
/**
 * print_last_digit - Prints the last lagit of an integer
 * @l: The integer we will operate on
 * Return: returns the last digit
 */
int print_last_digit(int l)
{
	int last = l % 10;

	if (l < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
