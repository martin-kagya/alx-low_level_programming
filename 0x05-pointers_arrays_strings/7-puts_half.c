#include "main.h"
/**
 * puts_half - divides string into two
 * and prints the second half
 * @str: the string to be divided
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = 0;
	int j, i;

	while (str[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	for (j = 0; j <= i; j++)
	{
		if (j > i / 2)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
