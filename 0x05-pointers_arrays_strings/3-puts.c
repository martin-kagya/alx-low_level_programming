#include "main.h"

/**
 * _puts - functions as the c put function
 * @str: string for operation
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
