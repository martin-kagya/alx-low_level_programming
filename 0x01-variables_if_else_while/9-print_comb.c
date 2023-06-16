#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(number[i]);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
