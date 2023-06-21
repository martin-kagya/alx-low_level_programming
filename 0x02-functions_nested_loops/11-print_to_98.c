#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natural numbers to 98
 * @n: the integer for operation in the function
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, \n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, \n", i);
		}
	}
	else
	{
		printf("%d\n" ,n);
	}
}
