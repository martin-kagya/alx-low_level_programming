#include "main.h"
/**
 * print_sign - Checks the sign of numbers
 * @c: the number to be checked
 * Return: 1 when positive -1 when negative 0 for zeros
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
