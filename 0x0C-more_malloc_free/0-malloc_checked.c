#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - it returns pointer to allocated memory
 * @b: unsignted integer b
 * Return: returns pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
