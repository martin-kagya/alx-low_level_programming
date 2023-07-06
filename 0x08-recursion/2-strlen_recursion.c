#include "main.h"
/**
 * _strlen_recursion - gives the string length
 * @s: string to count on
 * Return: returns the string length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = _strlen_recursion(s + 1);
		return (count + 1);
	}
}
