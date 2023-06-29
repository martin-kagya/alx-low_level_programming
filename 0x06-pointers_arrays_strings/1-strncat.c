#include "main.h"
/**
 * _strncat - it concatenates strings
 * @dest: string to print
 * @src: string being added
 * n: bytes to add
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index])
	{
		index++;
		dest_len++;
	}
	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
