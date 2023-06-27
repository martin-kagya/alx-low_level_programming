#include "main.h"
/**
 * *_strcpy - copies string
 * @dest: where to copy to
 * @src: string to be copied
 * Return: returns the copied string in dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
