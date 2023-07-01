#include "main.h"
/**
 * reverse_array - reverses a given array
 * @a: the array
 * @n: array size
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
