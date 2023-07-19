#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function to peform action on elemnets of an array
 * @array: array input
 * @size: array size
 * @action: the pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	{
		size_t n = 0;

		while (n < size)
		{
			action(array[n]);
			n++;
		}
	}
}
