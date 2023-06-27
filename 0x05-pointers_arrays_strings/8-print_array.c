#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array of numbers
 * @a: the arrray for operation
 * @n: size of array
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
