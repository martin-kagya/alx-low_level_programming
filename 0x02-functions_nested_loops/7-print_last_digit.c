#include "main.h"
/**
 * print_last_digit - Prints the last lagit of an integer
 * @l: The integer we will operate on
 * Return: returns the last digit
 */
int print_last_digit(int l)
{
	if (l < 0)
	{
		int last = l % 10;

		return (last);
	}
	int n = l % 10;

	return (n);
}
