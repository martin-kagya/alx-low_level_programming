#include "function_pointer.h"
#include <stddef.h>
/**
 * array_iterator - function to peform action on elemnets of an array
 * @array: array input
 * @size: array size
 * @action: the pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;
	
	if (action && array)
	{
		while (n < size)
		{
			(*action)(array(n));
			n++
		}
	}
}
