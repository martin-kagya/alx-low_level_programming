#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	b = 1;
	c = 2;
	for (a = 2; a <= 50; a++)
	{
		if (a != 50)
		{
		printf("%d, ", b);
		int temp = b;

		b = c;
		c = temp + b;
		}
		else
		{
			printf("%d", b);
			int temp = b;

			b = c;
			b = temp + b;
		}
	}
	printf("\n");
	return (0);
}
