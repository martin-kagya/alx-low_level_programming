#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: First integer value
 * @b: second integer value
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
