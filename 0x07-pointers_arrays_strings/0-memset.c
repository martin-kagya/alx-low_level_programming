#include "main.h"
/**
 * _memset - allcates memeory for char storage
 * @s: location to fill
 * @b: char bytes to fill with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char _memset(char *s, char *b, unsigned int n)
{
	char *start = *s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
