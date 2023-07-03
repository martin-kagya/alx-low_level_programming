#include "main.h"
/**
 * _memcpy - copies src to dest
 * @dest: place to copy to
 * @src: what we desire to copy
 * @n: the number of bytes
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new = dest;

	while (n--)
	{
		dest = src;
		src++;
	}
	return (new);
}
