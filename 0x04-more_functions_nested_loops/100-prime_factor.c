#include <stdio.h>
#include <math.h>
/**
 * main - checks for largest prime factor
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int number = 612852475143;

	for (n = sqrt(number); n > 2, n++)
	{
		if (number % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}
	return (0);
}
