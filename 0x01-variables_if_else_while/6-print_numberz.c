#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char numberz[] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		char out = numberz[i];

		putchar(out);
	}
	putchar('\n');
	return (0);
}
