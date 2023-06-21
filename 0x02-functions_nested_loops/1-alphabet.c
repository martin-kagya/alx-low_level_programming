#include "main.h"
/**
 * print_alphabet - Lists alphabets
 * Return: Always 0 (SUccess)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
