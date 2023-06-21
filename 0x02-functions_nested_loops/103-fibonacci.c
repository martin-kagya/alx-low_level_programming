#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c;
	long int sum = 2;

	a = 1;
	b = 2;
	while (b < 4000000)
	{
		c = a;
		a = b;
		b = c + a;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("%ld\n", sum);
}
