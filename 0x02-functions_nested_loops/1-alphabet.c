#include "main.h"
/**
 * main - Lists alphabets
 * Reurn: Always 0 (SUccess)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
