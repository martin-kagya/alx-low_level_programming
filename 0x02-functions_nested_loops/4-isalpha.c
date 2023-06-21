#include "main.h"
/**
 * _isalpha - Checks the case of alphabet
 * @c: the character to be checked
 * Return: 1 for when it is upper or lower and 0 for the rest
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
