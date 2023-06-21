#include "main.h"
/**
 * print_sign - Checks the sign of numbers
 * @c: the number to be checked
 * Return: 1 when positive -1 when negative 0 for zeros
 */
int print_sign(int c)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		return (0);
	}
}
