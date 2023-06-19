#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char input;

	for (input = '0'; input <= '9'; input++)
	{
		putchar(input);
	}
	for (input = 'a'; input <= 'f'; input++)
	{
		putchar(input);
	}
	putchar('\n');
	return (0);
}
