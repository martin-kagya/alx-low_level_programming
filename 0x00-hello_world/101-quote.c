#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char quote[] = "and that piece of art is useful\""
		" - Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, quote, sizeof(quote));

	return (1);
}