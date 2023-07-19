#include "function_pointers.h"
/**
 * int_index - function which returns an index
 * @array: array input
 * @size: size of the array
 * @cmp: function pointer
 * Return: returns -1 upon error and index of the elm when succeesful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
