#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @s: string for operation
 * Return: returns string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
