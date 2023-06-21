#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c, temp;

	b = 1;
	c = 2;
	for (a = 1; a <= 50; a++)
	{
		if (a != 50)
		{
			printf("%ld, ", b);
			temp = b;
			b = c;
			c = temp + b;
		}
		else
		{
			printf("%ld", b);
			temp = b;
			b = c;
			b = temp + b;
		}
	}
	printf("\n");
	return (0);
}
