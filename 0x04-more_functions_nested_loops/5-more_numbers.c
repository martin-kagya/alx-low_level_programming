#include "main.h"
/**
 * more_numbers - print fourteen digits ten times
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
