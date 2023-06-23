#include "main.h"
/**
 * print_number - prints number inputs
 * @n: number to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		k = -n;
		_putchar('-');
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
