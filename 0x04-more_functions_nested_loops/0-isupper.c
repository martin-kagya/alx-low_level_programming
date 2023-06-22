#include "main.h"
/**
 * _isupper - Checks if a character is upper
 * @c: The character to be checked
 * Return: 0 when is lower and 1 when is upper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
