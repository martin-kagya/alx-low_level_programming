#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int64_t a, b, c, temp;

	b = 1;
	c = 2;
	for (a = 2; a <= 50; a++)
	{
		if (a != 50)
		{
			printf("%lld, ", b);
			temp = b;
			b = c;
			c = temp + b;
		}
		else
		{
			printf("%lld", b);
			temp = b;
			b = c;
			b = temp + b;
		}
	}
	printf("\n");
	return (0);
}
