#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: string to be reversed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
}
