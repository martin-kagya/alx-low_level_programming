#include "main.h"
/**
 * islower - checks if a character is in lowercase
 * @c: character to be checked
 * Return: 1 for lower case and 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
