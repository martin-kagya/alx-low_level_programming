#include <stdio.h>
/**
 * main - Prints fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 1;
	for (i = 1; i <= 98; i++)
	{
		if (i != 98)
		{
		c = a;
		a = b;
		b = c + b;
		printf("%lu, ", b);
		}
		else
		{
			c = a;
			a = b;
			b = c + b;
			printf("%lu", b);
		}
	}
	printf("\n");
	return (0);
}
