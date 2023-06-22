#include "main.h"
/**
 * print_numbers - prints digits
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
