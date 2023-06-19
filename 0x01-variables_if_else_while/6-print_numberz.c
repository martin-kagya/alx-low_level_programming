#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int numberz[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		int out = numberz[i];

		putchar((char)out + '0');
	}
	putchar('\n');
	return (0);
}
