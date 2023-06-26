#include "main.h"
/**
 * puts2 - prints half of the string given
 * @str: string for operation
 * Return: Always 0
 */
void puts2(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
