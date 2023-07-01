#include "main.h"
/**
 * leet - assigns a set of numbers to characters
 * @s: the string to be used
 * Return: returns s with the numbers
 */
char *leet(char *s)
{
	int i, j;
	char *ptr = s;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (ptr);
}
