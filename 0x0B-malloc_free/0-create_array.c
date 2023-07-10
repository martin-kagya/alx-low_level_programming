#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - function for array creation
 * with malloc
 * @size: size of array to be created
 * @c: the characters to be stored in the array
 * Return: returns Null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
